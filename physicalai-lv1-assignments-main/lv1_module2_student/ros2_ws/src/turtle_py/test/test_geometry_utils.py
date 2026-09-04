import math
import pytest
from turtle_py.geometry_utils import (
    calculate_distance_to_goal,
    normalize_angle_to_goal,
    is_waypoint_reached,
)


# ==========================================
# 1. 거리 계산 함수 테스트 (calculate_distance_to_goal)
# ==========================================
def test_distance_normal():
    """정상 케이스: 3-4-5 직각삼각형 거리"""
    dist = calculate_distance_to_goal(0.0, 0.0, 3.0, 4.0)
    assert pytest.approx(dist, rel=1e-5) == 5.0


def test_distance_boundary():
    """경계값 케이스: 제자리(거리 0), 음수 평면"""
    # 같은 위치인 경우
    assert calculate_distance_to_goal(5.5, 5.5, 5.5, 5.5) == 0.0
    # 4사분면 음수 좌표 거리
    dist = calculate_distance_to_goal(-1.0, -1.0, -4.0, -5.0)
    assert pytest.approx(dist, rel=1e-5) == 5.0


def test_distance_exception():
    """예외 상황: 문자열 또는 None 전달 시 TypeError 발생 검증"""
    with pytest.raises(TypeError):
        calculate_distance_to_goal(0.0, 0.0, '3.0', 4.0)


# ==========================================
# 2. 목표 각도 정규화 테스트 (normalize_angle_to_goal)
# ==========================================
def test_angle_normal():
    """정상 케이스: 0도, 90도(pi/2), 180도(pi) 방향"""
    # 동쪽 (+x 방향) -> 0 rad
    assert pytest.approx(
        normalize_angle_to_goal(0.0, 0.0, 1.0, 0.0), abs=1e-5
    ) == 0.0
    # 북쪽 (+y 방향) -> pi/2 rad
    assert pytest.approx(
        normalize_angle_to_goal(0.0, 0.0, 0.0, 1.0), abs=1e-5
    ) == (math.pi / 2.0)


def test_angle_boundary():
    """경계값 케이스: -pi 및 pi 경계값 검증"""
    # 서쪽 (-x 방향) -> atan2는 pi를 반환
    angle_west = normalize_angle_to_goal(1.0, 0.0, 0.0, 0.0)
    assert pytest.approx(abs(angle_west), abs=1e-5) == math.pi
    assert -math.pi <= angle_west <= math.pi

    # 남쪽 (-y 방향) -> -pi/2
    angle_south = normalize_angle_to_goal(0.0, 1.0, 0.0, 0.0)
    assert pytest.approx(angle_south, abs=1e-5) == (-math.pi / 2.0)


def test_angle_exception():
    """예외 상황: 잘못된 데이터 타입"""
    with pytest.raises(TypeError):
        normalize_angle_to_goal(None, 0.0, 1.0, 1.0)


# ==========================================
# 3. 경유점 도달 판정 테스트 (is_waypoint_reached)
# ==========================================
def test_waypoint_normal():
    """정상 케이스: 명확히 안쪽 또는 바깥쪽인 경우"""
    assert is_waypoint_reached(distance=0.05, tolerance=0.1) is True
    assert is_waypoint_reached(distance=0.5, tolerance=0.1) is False


def test_waypoint_boundary():
    """경계값 케이스: 허용 오차와 정확히 일치할 때(True), 0일 때"""
    # 거리가 허용 오차 경계값과 정확히 같을 때 도달(True) 판정이어야 함
    assert is_waypoint_reached(distance=0.1, tolerance=0.1) is True
    # 아주 미세하게 초과한 경우
    assert is_waypoint_reached(distance=0.10001, tolerance=0.1) is False
    # 거리가 0인 경우
    assert is_waypoint_reached(distance=0.0, tolerance=0.1) is True


def test_waypoint_exception():
    """예외 상황: 거리가 음수이거나 tolerance가 음수인 비정상 입력"""
    with pytest.raises(ValueError):
        is_waypoint_reached(distance=-0.2, tolerance=0.1)

    with pytest.raises(ValueError):
        is_waypoint_reached(distance=0.05, tolerance=-0.1)

    with pytest.raises(TypeError):
        is_waypoint_reached(distance='0.05', tolerance=0.1)