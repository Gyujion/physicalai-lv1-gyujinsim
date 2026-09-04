#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float32.hpp"
#include <memory>

class DistanceSubsriber : public rclcpp::Node
{
  public:
    DistanceSubsriber() : Node("distance_subscriber")
    {
        this->declare_parameter("warn_distance", 3.0);

        subscription_ = this->create_subscription<std_msgs::msg::Float32>(
            "turtle_distance", 10, std::bind(&DistanceSubsriber::distance_callback, this, std::placeholders::_1));
    }

  private:
    void distance_callback(const std_msgs::msg::Float32::SharedPtr msg)
    {
        double warn_dist_ = this->get_parameter("warn_distance").as_double();

        float current_dist_ = msg->data;

        if (current_dist_ > warn_dist_)
        {
            RCLCPP_INFO(this->get_logger(), "경고! 임계값 %.1f보다 큽니다", warn_dist_);
        }
    }

    rclcpp::Subscription<std_msgs::msg::Float32>::SharedPtr subscription_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<DistanceSubsriber>();

    rclcpp::spin(node);

    RCLCPP_INFO(node->get_logger(), "DistanceSubscriber 노드 종료");
    rclcpp::shutdown();

    return 0;
}