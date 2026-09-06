// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_interfaces/msg/detail/waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_Waypoint_label
{
public:
  explicit Init_Waypoint_label(::turtle_interfaces::msg::Waypoint & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::Waypoint label(::turtle_interfaces::msg::Waypoint::_label_type arg)
  {
    msg_.label = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::Waypoint msg_;
};

class Init_Waypoint_tolerance
{
public:
  explicit Init_Waypoint_tolerance(::turtle_interfaces::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_label tolerance(::turtle_interfaces::msg::Waypoint::_tolerance_type arg)
  {
    msg_.tolerance = std::move(arg);
    return Init_Waypoint_label(msg_);
  }

private:
  ::turtle_interfaces::msg::Waypoint msg_;
};

class Init_Waypoint_y
{
public:
  explicit Init_Waypoint_y(::turtle_interfaces::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_tolerance y(::turtle_interfaces::msg::Waypoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Waypoint_tolerance(msg_);
  }

private:
  ::turtle_interfaces::msg::Waypoint msg_;
};

class Init_Waypoint_x
{
public:
  Init_Waypoint_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoint_y x(::turtle_interfaces::msg::Waypoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Waypoint_y(msg_);
  }

private:
  ::turtle_interfaces::msg::Waypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::Waypoint>()
{
  return turtle_interfaces::msg::builder::Init_Waypoint_x();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
