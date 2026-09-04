import math


def calculate_distance_to_goal(
    current_x: float, current_y: float, goal_x: float, goal_y: float
) -> float:
    """1. 목표까지의 유클리드 거리 계산"""
    # 입력값 타입 검증 (예외 상황 처리)
    for val in [current_x, current_y, goal_x, goal_y]:
        if not isinstance(val, (int, float)):
            raise TypeError('좌표값은 반드시 숫자형이어야 합니다.')

    dx = goal_x - current_x
    dy = goal_y - current_y
    return math.sqrt(dx**2 + dy**2)


def normalize_angle_to_goal(
    current_x: float, current_y: float, goal_x: float, goal_y: float
) -> float:
    """2. 목표를 향한 각도 계산 (-pi ~ pi 정규화)"""
    for val in [current_x, current_y, goal_x, goal_y]:
        if not isinstance(val, (int, float)):
            raise TypeError('좌표값은 반드시 숫자형이어야 합니다.')

    dx = goal_x - current_x
    dy = goal_y - current_y

    # math.atan2는 기본적으로 [-pi, pi] 범위를 반환
    angle = math.atan2(dy, dx)

    # -pi ~ pi 범위로 엄격히 정규화
    while angle > math.pi:
        angle -= 2.0 * math.pi
    while angle < -math.pi:
        angle += 2.0 * math.pi

    return angle


def is_waypoint_reached(distance: float, tolerance: float = 0.1) -> bool:
    """3. 경유점 도달 판정 (허용 오차 경계값 검사)"""
    if not isinstance(distance, (int, float)) or not isinstance(
        tolerance, (int, float)
    ):
        raise TypeError('거리와 허용 오차는 숫자형이어야 합니다.')

    if tolerance < 0.0:
        raise ValueError('허용 오차는 음수일 수 없습니다.')

    if distance < 0.0:
        raise ValueError('거리는 음수일 수 없습니다.')

    # 도달 조건: 거리가 허용 오차 이하인 경우
    return distance <= tolerance