import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import math
from rclpy.signals import SignalHandlerOptions

class SquareMove(Node):

    def __init__(self):
        super().__init__('square_move')

        self.publisher = self.create_publisher(
            Twist,
            'turtle1/cmd_vel',
            10
        )

        self.timer = self.create_timer(1.0,self.timer_callback)
        self.move = True

    def timer_callback(self):
        msg = Twist()

        if self.move:
            msg.linear.x = 2.0
            msg.angular.z = 0.0
        else:
            msg.linear.x = 0.0
            msg.angular.z = math.pi/2.0

        self.publisher.publish(msg)

        self.move = not self.move

def main():
    rclpy.init(signal_handler_options=SignalHandlerOptions.NO)
    node = SquareMove()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('SquareMove 노드 종료')
        stop_msg = Twist()
        stop_msg.linear.x = 0.0
        stop_msg.angular.z = 0.0
        node.publisher.publish(stop_msg)
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()

if __name__ == '__main__':
    main()
        