import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import math
from rclpy.signals import SignalHandlerOptions

class PolygonMove(Node):

    def __init__(self, n: int):
        super().__init__('polygon_move')

        self.publisher = self.create_publisher(
            Twist,
            'turtle1/cmd_vel',
            10
        )

        self.n = n
        self.turn_angle = (2.0 * math.pi) / self.n  # 외각 계산 (1초 동안 회전할 각속도 rad/s)
        self.total_steps = 2 * self.n              # 직진 n회, 회전 n회
        self.current_step = 0
        self.move = True

        self.timer = self.create_timer(1.0, self.timer_callback)
        self.get_logger().info(f'{self.n}각형 그리기를 시작합니다. (외각: {math.degrees(self.turn_angle):.1f}도)')

    def timer_callback(self):
        # n각형을 모두 그렸으면 로봇을 멈추고 타이머 중지
        if self.current_step >= self.total_steps:
            self.stop_robot()
            self.timer.cancel()
            self.get_logger().info(f'{self.n}각형 그리기가 완료되었습니다.')
            return

        msg = Twist()

        if self.move:
            msg.linear.x = 2.0
            msg.angular.z = 0.0
            self.get_logger().info(f'[{self.current_step // 2 + 1}/{self.n}] 직진 중...')
        else:
            msg.linear.x = 0.0
            msg.angular.z = self.turn_angle
            self.get_logger().info(f'[{self.current_step // 2 + 1}/{self.n}] 회전 중...')

        self.publisher.publish(msg)
        self.move = not self.move
        self.current_step += 1

    def stop_robot(self):
        stop_msg = Twist()
        stop_msg.linear.x = 0.0
        stop_msg.angular.z = 0.0
        self.publisher.publish(stop_msg)


def main():
    # 실행 시 사용자에게 n각형 입력받기
    while True:
        try:
            val = input("그리고 싶은 다각형의 변의 개수 n을 입력하세요 (예: 3, 5, 8): ")
            n = int(val)
            if n < 3:
                print("다각형은 최소 3각형(n >= 3)이어야 합니다. 다시 입력해주세요.")
                continue
            break
        except ValueError:
            print("올바른 정수 값을 입력해주세요.")

    rclpy.init(signal_handler_options=SignalHandlerOptions.NO)
    node = PolygonMove(n)

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('PolygonMove 노드 강제 종료')
        node.stop_robot()
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()