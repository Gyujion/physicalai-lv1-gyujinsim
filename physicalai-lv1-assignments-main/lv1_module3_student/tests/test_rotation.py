"""문제 3 — 회전 행렬의 수학적 성질 검증 (pytest).

지시문이 요구하는 4가지를 각각 테스트 함수로 작성한다.

  1. 회전행렬의 열이 서로 직교하는 단위벡터인가   -> test_columns_are_orthonormal
  2. 행렬식이 1인가                               -> test_determinant_is_one
  3. 역행렬이 전치와 같은가                       -> test_inverse_equals_transpose
  4. 재직교화 결과가 직교행렬인가                 -> test_gram_schmidt_restores_orthogonality
"""

from __future__ import annotations

import numpy as np
import pytest
from src.rotation import (
    axis_angle_from_matrix,
    gram_schmidt,
    is_rotation,
    orthogonality_error,
    rodrigues,
    rot_x,
    rot_y,
    rot_z,
)
from src.vectors import det

ANGLES = [0.0, np.deg2rad(22.5), np.pi / 6, np.pi / 4, np.pi / 2, 2.0, np.pi, -1.234]
MAKERS = [rot_x, rot_y, rot_z]


@pytest.fixture
def rng():
    """난수는 반드시 시드를 고정한다."""
    return np.random.default_rng(42)


# --- 1. 열이 서로 직교하는 단위벡터인가 -------------------------------------

@pytest.mark.parametrize("maker", MAKERS)
@pytest.mark.parametrize("theta", ANGLES)
def test_columns_are_orthonormal(maker, theta):
    """각 열의 길이가 1인지, 서로 다른 열 사이의 내적이 0인지 검사한다."""
    R = maker(theta)
    c0, c1, c2 = R[:, 0], R[:, 1], R[:, 2]

    # 각 열의 길이(L2 norm)가 1인지 검사
    assert np.isclose(np.linalg.norm(c0), 1.0), f"0번 열의 길이가 1이 아닙니다: {np.linalg.norm(c0)}"
    assert np.isclose(np.linalg.norm(c1), 1.0), f"1번 열의 길이가 1이 아닙니다: {np.linalg.norm(c1)}"
    assert np.isclose(np.linalg.norm(c2), 1.0), f"2번 열의 길이가 1이 아닙니다: {np.linalg.norm(c2)}"

    # 서로 다른 열 사이의 내적이 0인지(직교성) 검사
    assert np.isclose(np.dot(c0, c1), 0.0, atol=1e-10), "열 0과 1이 직교하지 않습니다."
    assert np.isclose(np.dot(c1, c2), 0.0, atol=1e-10), "열 1과 2가 직교하지 않습니다."
    assert np.isclose(np.dot(c2, c0), 0.0, atol=1e-10), "열 2와 0이 직교하지 않습니다."


# --- 2. 행렬식이 1인가 --------------------------------------------------------

@pytest.mark.parametrize("maker", MAKERS)
@pytest.mark.parametrize("theta", ANGLES)
def test_determinant_is_one(maker, theta):
    """직접 구현한 det(R) == 1.0 인지 검사한다."""
    R = maker(theta)
    d = det(R)
    # 검산용 넘파이 행렬식 계산
    np_d = np.linalg.det(R)

    assert np.isclose(d, 1.0, atol=1e-10), f"det(R) 값이 1이 아닙니다: det={d}"
    assert np.isclose(d, np_d, atol=1e-10), f"직접 구한 det({d})와 검산용 det({np_d})가 다릅니다."


# --- 3. 역행렬 == 전치 --------------------------------------------------------

@pytest.mark.parametrize("maker", MAKERS)
@pytest.mark.parametrize("theta", ANGLES)
def test_inverse_equals_transpose(maker, theta):
    """R.T @ R == I 이고, 검산용 inv(R)과 R.T가 일치하는지 검사한다."""
    R = maker(theta)
    I = np.eye(3)

    # 직교행렬 기본 성질: R^T @ R == I
    assert np.allclose(R.T @ R, I, atol=1e-10), "R.T @ R 이 단위 행렬이 아닙니다."
    assert np.allclose(R @ R.T, I, atol=1e-10), "R @ R.T 가 단위 행렬이 아닙니다."

    # 검산: np.linalg.inv(R) == R.T
    R_inv = np.linalg.inv(R)
    assert np.allclose(R.T, R_inv, atol=1e-10), "역행렬(inv)과 전치행렬(R.T)이 일치하지 않습니다."


# --- 4. 재직교화 결과가 직교행렬인가 -----------------------------------------

def test_gram_schmidt_restores_orthogonality(rng):
    """노이즈로 깨진 회전행렬을 Gram-Schmidt로 복구했을 때 SO(3) 성질을 만족하는지 검사한다."""
    R_clean = rot_z(0.3) @ rot_y(0.5) @ rot_x(-0.2)
    # 미세한 노이즈를 더해 직교성을 훼손
    noise = rng.normal(scale=1e-3, size=(3, 3))
    R_corrupted = R_clean + noise

    # 오염된 행렬은 회전행렬 판정에서 탈락해야 함
    assert not is_rotation(R_corrupted), "오염된 행렬이 회전행렬로 판정되었습니다."

    # Gram-Schmidt로 재직교화 수행
    R_restored = gram_schmidt(R_corrupted)

    # 복구 후 직교 오차, 행렬식, 회전행렬 판정 검증
    err = orthogonality_error(R_restored)
    assert err < 1e-10, f"재직교화 후에도 직교 오차가 너무 큽니다: {err}"
    assert np.isclose(det(R_restored), 1.0, atol=1e-10), "재직교화 후 행렬식이 1이 아닙니다."
    assert is_rotation(R_restored), "재직교화된 행렬이 회전행렬 판정(is_rotation)을 통과하지 못했습니다."


# --- 권장 추가 테스트 --------------------------------------------------------

def test_reflection_is_not_a_rotation():
    """det = -1 인 반사 행렬은 직교(R^T R = I)여도 회전행렬(is_rotation)이 아니어야 한다."""
    # y 성분을 반전시키는 반사 행렬
    S = np.diag([1.0, -1.0, 1.0])

    # 직교성은 만족하지만
    assert orthogonality_error(S) < 1e-10, "반사 행렬은 직교행렬이어야 합니다."
    # 행렬식이 -1이므로
    assert np.isclose(det(S), -1.0, atol=1e-10), "반사 행렬의 행렬식은 -1이어야 합니다."
    # 회전행렬 판정은 통과하지 못해야 함
    assert not is_rotation(S), "반사 행렬이 회전행렬로 판정되었습니다."


@pytest.mark.parametrize("theta", ANGLES)
def test_rodrigues_matches_rot_z(theta):
    """로드리게스 공식에 z축 단위벡터를 넣은 결과가 rot_z와 정확히 일치하는지 검사한다."""
    R_rod = rodrigues([0.0, 0.0, 1.0], theta)
    R_z = rot_z(theta)
    assert np.allclose(R_rod, R_z, atol=1e-10), "rodrigues([0, 0, 1], theta)와 rot_z(theta)가 일치하지 않습니다."


def test_axis_angle_roundtrip(rng):
    """임의의 축과 각도로 생성한 회전행렬에서 원래의 축과 각이 정상 복원되는지 검사한다."""
    # 임의의 축 생성 후 정규화
    axis = rng.normal(size=3)
    axis = axis / np.linalg.norm(axis)
    angle = 1.25  # 0 < theta < pi 범위

    R = rodrigues(axis, angle)
    recovered_axis, recovered_angle = axis_angle_from_matrix(R)

    assert np.isclose(recovered_angle, angle, atol=1e-8), "복원된 각도가 원래 각도와 다릅니다."
    assert np.allclose(recovered_axis, axis, atol=1e-8), "복원된 회전축이 원래 축과 다릅니다."