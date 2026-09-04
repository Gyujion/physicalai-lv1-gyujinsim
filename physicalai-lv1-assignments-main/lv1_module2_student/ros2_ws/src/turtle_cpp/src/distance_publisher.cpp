#include <chrono>
#include <cmath>
#include <functional>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float32.hpp"
#include "turtlesim/msg/pose.hpp"

using namespace std::chrono_literals;

class DistancePublisher : public rclcpp::Node
{
  public:
    DistancePublisher() : Node("distance_publisher")
    {
        this->declare_parameter("publish_rate", 10.0);
        publish_rate_ = this->get_parameter("publish_rate").as_double();

        subscription_ = this->create_subscription<turtlesim::msg::Pose>(
            "/turtle1/pose", 10, std::bind(&DistancePublisher::pose_callback, this, std::placeholders::_1));

        publisher_ = this->create_publisher<std_msgs::msg::Float32>("/turtle_distance", 10);

        auto timer_period =
            std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::duration<double>(1.0 / publish_rate_));
        timer_ = this->create_wall_timer(timer_period, std::bind(&DistancePublisher::timer_callback, this));
    }

  private:
    void pose_callback(const turtlesim::msg::Pose::SharedPtr msg)
    {
        lastest_msg_ = msg;
    }

    void timer_callback()
    {
        double rate = this->get_parameter("publish_rate").as_double();

        if (rate != publish_rate_ && rate > 0.0)
        {
            publish_rate_ = rate;
            auto new_period = std::chrono::duration_cast<std::chrono::nanoseconds>(
                std::chrono::duration<double>(1.0 / publish_rate_));
            timer_->cancel();
            timer_ = this->create_wall_timer(new_period, std::bind(&DistancePublisher::timer_callback, this));

            RCLCPP_INFO(this->get_logger(), "현재 발행 주기: %.1fHz", rate);
        }

        if (!lastest_msg_)
        {
            return;
        }

        double distance = std::sqrt(std::pow(lastest_msg_->x, 2) + std::pow(lastest_msg_->y, 2));

        auto msg = std_msgs::msg::Float32();
        msg.data = static_cast<float>(distance);
        publisher_->publish(msg);
    }

    double publish_rate_;
    turtlesim::msg::Pose::SharedPtr lastest_msg_ = nullptr;
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscription_;
    rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<DistancePublisher>();

    rclcpp::spin(node);

    RCLCPP_INFO(node->get_logger(), "DistancePublisher 노드 종료");
    rclcpp::shutdown();

    return 0;
}