// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:srv/SetGain.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__SRV__DETAIL__SET_GAIN__BUILDER_HPP_
#define TURTLE_INTERFACES__SRV__DETAIL__SET_GAIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_interfaces/srv/detail/set_gain__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetGain_Request_kd
{
public:
  explicit Init_SetGain_Request_kd(::turtle_interfaces::srv::SetGain_Request & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::srv::SetGain_Request kd(::turtle_interfaces::srv::SetGain_Request::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::srv::SetGain_Request msg_;
};

class Init_SetGain_Request_ki
{
public:
  explicit Init_SetGain_Request_ki(::turtle_interfaces::srv::SetGain_Request & msg)
  : msg_(msg)
  {}
  Init_SetGain_Request_kd ki(::turtle_interfaces::srv::SetGain_Request::_ki_type arg)
  {
    msg_.ki = std::move(arg);
    return Init_SetGain_Request_kd(msg_);
  }

private:
  ::turtle_interfaces::srv::SetGain_Request msg_;
};

class Init_SetGain_Request_kp
{
public:
  Init_SetGain_Request_kp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGain_Request_ki kp(::turtle_interfaces::srv::SetGain_Request::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_SetGain_Request_ki(msg_);
  }

private:
  ::turtle_interfaces::srv::SetGain_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::srv::SetGain_Request>()
{
  return turtle_interfaces::srv::builder::Init_SetGain_Request_kp();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetGain_Response_message
{
public:
  explicit Init_SetGain_Response_message(::turtle_interfaces::srv::SetGain_Response & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::srv::SetGain_Response message(::turtle_interfaces::srv::SetGain_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::srv::SetGain_Response msg_;
};

class Init_SetGain_Response_success
{
public:
  Init_SetGain_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGain_Response_message success(::turtle_interfaces::srv::SetGain_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetGain_Response_message(msg_);
  }

private:
  ::turtle_interfaces::srv::SetGain_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::srv::SetGain_Response>()
{
  return turtle_interfaces::srv::builder::Init_SetGain_Response_success();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__SRV__DETAIL__SET_GAIN__BUILDER_HPP_
