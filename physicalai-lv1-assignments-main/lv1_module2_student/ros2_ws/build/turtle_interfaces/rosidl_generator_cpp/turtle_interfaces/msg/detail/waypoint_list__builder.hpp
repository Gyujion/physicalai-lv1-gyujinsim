// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/WaypointList.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__WAYPOINT_LIST__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__WAYPOINT_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_interfaces/msg/detail/waypoint_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_WaypointList_waypoints
{
public:
  explicit Init_WaypointList_waypoints(::turtle_interfaces::msg::WaypointList & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::WaypointList waypoints(::turtle_interfaces::msg::WaypointList::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::WaypointList msg_;
};

class Init_WaypointList_header
{
public:
  Init_WaypointList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaypointList_waypoints header(::turtle_interfaces::msg::WaypointList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WaypointList_waypoints(msg_);
  }

private:
  ::turtle_interfaces::msg::WaypointList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::WaypointList>()
{
  return turtle_interfaces::msg::builder::Init_WaypointList_header();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__WAYPOINT_LIST__BUILDER_HPP_
