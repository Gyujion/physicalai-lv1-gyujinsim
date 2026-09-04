import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
from rclpy.signals import SignalHandlerOptions

class DistanceSubscriber(Node):

    def __init__(self):
        super().__init__('distance_subscriber')

        self.declare_parameter('warn_distance', 3.0)

        self.subscription = self.create_subscription(
            Float32,
            'turtle_distance',
            self.distance_callback,
            10
        )

    def distance_callback(self,msg):
        warn_dist = self.get_parameter('warn_distance').value

        current_dist = msg.data

        if current_dist > warn_dist:
            self.get_logger().info(f'경고! 임계값 {warn_dist}보다 큽니다')

def main():
    rclpy.init(signal_handler_options=SignalHandlerOptions.NO)
    node = DistanceSubscriber()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('DistanceSubscriber 노드 종료')
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()

if __name__ == '__main__':
    main()