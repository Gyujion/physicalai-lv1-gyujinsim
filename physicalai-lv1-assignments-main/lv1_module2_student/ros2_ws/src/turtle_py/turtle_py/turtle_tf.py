import math
from geometry_msgs.msg import Point, TransformStamped
from rcl_interfaces.msg import SetParametersResult
import rclpy
from rclpy.node import Node
from tf2_ros import TransformBroadcaster
from turtlesim.msg import Pose
from visualization_msgs.msg import Marker


def euler_to_quaternion(roll: float, pitch: float, yaw: float):
    cy = math.cos(yaw * 0.5)
    sy = math.sin(yaw * 0.5)
    cp = math.cos(pitch * 0.5)
    sp = math.sin(pitch * 0.5)
    cr = math.cos(roll * 0.5)
    sr = math.sin(roll * 0.5)

    qx = sr * cp * cy - cr * sp * sy
    qy = cr * sp * cy + sr * cp * sy
    qz = cr * cp * sy - sr * sp * cy
    qw = cr * cp * cy + sr * sp * sy
    return qx, qy, qz, qw


class TurtleTfAndMarkerNode(Node):

    def __init__(self):
        super().__init__('turtle_tf_and_marker_node')

        # -----------------------------------------------------------
        # 1. publish_rate 파라미터 선언 및 예외 검사 (0 이하 방어)
        # -----------------------------------------------------------
        self.declare_parameter('publish_rate', 1.0)
        input_rate = self.get_parameter('publish_rate').value

        if input_rate <= 0.0:
            self.get_logger().warn(
                f'잘못된 publish_rate({input_rate})가 입력되었습니다! 기본값 1.0Hz를 적용합니다.'
            )
            self.publish_rate = 1.0
        else:
            self.publish_rate = float(input_rate)

        # 런타임에 파라미터가 바뀔 때를 대비한 콜백 등록 (ros2 param set 대비)
        self.add_on_set_parameters_callback(self.parameter_callback)

        # -----------------------------------------------------------
        # 2. waypoints 파라미터 선언 및 예외 검사 (빈 목록 방어)
        # -----------------------------------------------------------
        # [x1, y1, x2, y2, ...] 형태의 1차원 float 리스트로 파라미터 선언
        default_pts = [2.0, 2.0, 8.0, 2.0, 8.0, 8.0, 2.0, 8.0, 5.54, 5.54]
        self.declare_parameter('waypoints', default_pts)
        raw_waypoints = self.get_parameter('waypoints').value

        if not raw_waypoints:
            self.get_logger().warn(
                '경유점 목록(waypoints)이 비어 있습니다! 기본 경유점들을 사용합니다.'
            )
            raw_waypoints = default_pts

        # (x, y) 튜플 리스트로 변환
        self.waypoints = [
            (raw_waypoints[i], raw_waypoints[i + 1])
            for i in range(0, len(raw_waypoints), 2)
        ]

        # -----------------------------------------------------------
        # 3. TF 브로드캐스터 및 퍼블리셔 / 서브스크라이버 설정
        # -----------------------------------------------------------
        self.tf_broadcaster = TransformBroadcaster(self)

        self.pose_sub = self.create_subscription(
            Pose, '/turtle1/pose', self.handle_turtle_pose, 10
        )

        self.marker_pub = self.create_publisher(Marker, '/waypoints_marker', 10)

        # ZeroDivisionError 없이 안전하게 타이머 생성
        self.timer = self.create_timer(
            1.0 / self.publish_rate, self.publish_waypoints
        )

    def parameter_callback(self, params):
        """실행 중 ros2 param set 으로 들어오는 잘못된 값 방어 및 로깅"""
        for param in params:
            if param.name == 'publish_rate':
                if param.value <= 0.0:
                    self.get_logger().error(
                        f'파라미터 거부: publish_rate는 0보다 커야 합니다 (입력값: {param.value}).'
                    )
                    return SetParametersResult(
                        successful=False, reason='publish_rate must be > 0'
                    )

                self.publish_rate = float(param.value)
                self.timer.timer_period_ns = int(
                    (1.0 / self.publish_rate) * 1e9
                )
                self.get_logger().info(
                    f'마커 발행 주기가 {self.publish_rate}Hz로 성공적으로 변경되었습니다.'
                )

        return SetParametersResult(successful=True)

    def handle_turtle_pose(self, msg: Pose):
        """거북이 Pose -> world -> turtle1 TF 변환 발행"""
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = 'world'
        t.child_frame_id = 'turtle1'

        t.transform.translation.x = msg.x
        t.transform.translation.y = msg.y
        t.transform.translation.z = 0.0

        qx, qy, qz, qw = euler_to_quaternion(0.0, 0.0, msg.theta)
        t.transform.rotation.x = qx
        t.transform.rotation.y = qy
        t.transform.rotation.z = qz
        t.transform.rotation.w = qw

        self.tf_broadcaster.sendTransform(t)

    def publish_waypoints(self):
        """경유점들을 SPHERE_LIST 형태로 RViz에 발행"""
        # [예외 방어] 마커 발행 시점에 경유점 리스트가 비어있을 경우 IndexError 방지
        if not self.waypoints:
            self.get_logger().warn(
                '표시할 경유점 데이터가 비어 있어 발행을 건너뜁니다.',
                throttle_duration_sec=2.0,
            )
            return

        marker = Marker()
        marker.header.frame_id = 'world'
        marker.header.stamp = self.get_clock().now().to_msg()
        marker.ns = 'waypoints'
        marker.id = 0
        marker.type = Marker.SPHERE_LIST
        marker.action = Marker.ADD

        marker.scale.x = 0.4
        marker.scale.y = 0.4
        marker.scale.z = 0.4

        marker.color.r = 1.0
        marker.color.g = 0.8
        marker.color.b = 0.0
        marker.color.a = 1.0

        for wx, wy in self.waypoints:
            p = Point()
            p.x = float(wx)
            p.y = float(wy)
            p.z = 0.0
            marker.points.append(p)

        self.marker_pub.publish(marker)


def main(args=None):
    rclpy.init(args=args)
    node = TurtleTfAndMarkerNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == '__main__':
    main()