import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from std_msgs.msg import Float32
import math
from rclpy.signals import SignalHandlerOptions

class DistancePublisher(Node):
    def __init__(self):
        super().__init__('distance_publisher')

        self.declare_parameter('publish_rate',10.0)
        self.publish_rate = self.get_parameter('publish_rate').value

        self.latest_msg = None

        self.subscription = self.create_subscription(
            Pose,
            '/turtle1/pose',
            self.pose_callback,
            10
        )

        self.publisher = self.create_publisher(
            Float32,
            '/turtle_distance',
            10
        )

        timer_period = 1.0 / self.publish_rate
        self.timer = self.create_timer(timer_period,self.timer_callback)

    def pose_callback(self,msg):
        self.latest_msg = msg

    def timer_callback(self):

        rate = self.get_parameter('publish_rate').value

        if rate != self.publish_rate and rate > 0:
            self.publish_rate = rate
            self.timer.timer_period_ns = int((1.0/self.publish_rate)*1e9)
            self.get_logger().info(f'현재 발행 주기: {rate}Hz')

        if self.latest_msg is None:
            return

        distance = math.sqrt(self.latest_msg.x**2 + self.latest_msg.y**2)

        msg = Float32()
        msg.data = float(distance)
        self.publisher.publish(msg)

def main():
    rclpy.init(signal_handler_options=SignalHandlerOptions.NO)
    node = DistancePublisher()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('DistancePublisher 노드 종료.')
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()

if __name__=='__main__':
    main()