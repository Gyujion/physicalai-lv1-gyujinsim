#include <chrono>
#include <cmath>
#include <memory>

#include "geometry_msgs/msg/twist.hpp"
#include "rclcpp/rclcpp.hpp"

using namespace std::chrono_literals;

class SquareMove : public rclcpp::Node
{
  public:
    SquareMove() : Node("square_move"), move_(true)
    {
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("turtle1/cmd_vel", 10);
        timer_ = this->create_wall_timer(1s, std::bind(&SquareMove::timer_callback, this));
    }

    void stop_robot()
    {
        auto stop_msg = geometry_msgs::msg::Twist();
        stop_msg.linear.x = 0.0;
        stop_msg.angular.z = 0.0;
        publisher_->publish(stop_msg);
    }

  private:
    void timer_callback()
    {
        auto msg = geometry_msgs::msg::Twist();

        if (move_)
        {
            msg.linear.x = 2.0;
            msg.angular.z = 0.0;
        }
        else
        {
            msg.linear.x = 0.0;
            msg.angular.z = M_PI / 2.0;
        }
        publisher_->publish(msg);

        move_ = !move_;
    }
    bool move_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<SquareMove>();

    rclcpp::spin(node);

    RCLCPP_INFO(node->get_logger(), "SquareMove 노드 종료");

    node->stop_robot();

    rclcpp::shutdown();

    return 0;
}
