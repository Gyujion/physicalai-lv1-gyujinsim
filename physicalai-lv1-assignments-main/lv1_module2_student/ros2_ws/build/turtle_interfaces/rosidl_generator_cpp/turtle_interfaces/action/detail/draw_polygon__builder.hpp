// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:action/DrawPolygon.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__ACTION__DETAIL__DRAW_POLYGON__BUILDER_HPP_
#define TURTLE_INTERFACES__ACTION__DETAIL__DRAW_POLYGON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_interfaces/action/detail/draw_polygon__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_interfaces
{

namespace action
{

namespace builder
{

class Init_DrawPolygon_Goal_side_length
{
public:
  explicit Init_DrawPolygon_Goal_side_length(::turtle_interfaces::action::DrawPolygon_Goal & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::action::DrawPolygon_Goal side_length(::turtle_interfaces::action::DrawPolygon_Goal::_side_length_type arg)
  {
    msg_.side_length = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::action::DrawPolygon_Goal msg_;
};

class Init_DrawPolygon_Goal_sides
{
public:
  Init_DrawPolygon_Goal_sides()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrawPolygon_Goal_side_length sides(::turtle_interfaces::action::DrawPolygon_Goal::_sides_type arg)
  {
    msg_.sides = std::move(arg);
    return Init_DrawPolygon_Goal_side_length(msg_);
  }

private:
  ::turtle_interfaces::action::DrawPolygon_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::action::DrawPolygon_Goal>()
{
  return turtle_interfaces::action::builder::Init_DrawPolygon_Goal_sides();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace action
{

namespace builder
{

class Init_DrawPolygon_Result_total_distance
{
public:
  Init_DrawPolygon_Result_total_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::action::DrawPolygon_Result total_distance(::turtle_interfaces::action::DrawPolygon_Result::_total_distance_type arg)
  {
    msg_.total_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::action::DrawPolygon_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::action::DrawPolygon_Result>()
{
  return turtle_interfaces::action::builder::Init_DrawPolygon_Result_total_distance();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace action
{

namespace builder
{

class Init_DrawPolygon_Feedback_progress
{
public:
  explicit Init_DrawPolygon_Feedback_progress(::turtle_interfaces::action::DrawPolygon_Feedback & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::action::DrawPolygon_Feedback progress(::turtle_interfaces::action::DrawPolygon_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::action::DrawPolygon_Feedback msg_;
};

class Init_DrawPolygon_Feedback_completed_sides
{
public:
  Init_DrawPolygon_Feedback_completed_sides()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrawPolygon_Feedback_progress completed_sides(::turtle_interfaces::action::DrawPolygon_Feedback::_completed_sides_type arg)
  {
    msg_.completed_sides = std::move(arg);
    return Init_DrawPolygon_Feedback_progress(msg_);
  }

private:
  ::turtle_interfaces::action::DrawPolygon_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::action::DrawPolygon_Feedback>()
{
  return turtle_interfaces::action::builder::Init_DrawPolygon_Feedback_completed_sides();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace action
{

namespace builder
{

class Init_DrawPolygon_SendGoal_Request_goal
{
public:
  explicit Init_DrawPolygon_SendGoal_Request_goal(::turtle_interfaces::action::DrawPolygon_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::action::DrawPolygon_SendGoal_Request goal(::turtle_interfaces::action::DrawPolygon_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::action::DrawPolygon_SendGoal_Request msg_;
};

class Init_DrawPolygon_SendGoal_Request_goal_id
{
public:
  Init_DrawPolygon_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrawPolygon_SendGoal_Request_goal goal_id(::turtle_interfaces::action::DrawPolygon_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DrawPolygon_SendGoal_Request_goal(msg_);
  }

private:
  ::turtle_interfaces::action::DrawPolygon_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::action::DrawPolygon_SendGoal_Request>()
{
  return turtle_interfaces::action::builder::Init_DrawPolygon_SendGoal_Request_goal_id();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace action
{

namespace builder
{

class Init_DrawPolygon_SendGoal_Response_stamp
{
public:
  explicit Init_DrawPolygon_SendGoal_Response_stamp(::turtle_interfaces::action::DrawPolygon_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::action::DrawPolygon_SendGoal_Response stamp(::turtle_interfaces::action::DrawPolygon_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::action::DrawPolygon_SendGoal_Response msg_;
};

class Init_DrawPolygon_SendGoal_Response_accepted
{
public:
  Init_DrawPolygon_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrawPolygon_SendGoal_Response_stamp accepted(::turtle_interfaces::action::DrawPolygon_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_DrawPolygon_SendGoal_Response_stamp(msg_);
  }

private:
  ::turtle_interfaces::action::DrawPolygon_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::action::DrawPolygon_SendGoal_Response>()
{
  return turtle_interfaces::action::builder::Init_DrawPolygon_SendGoal_Response_accepted();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace action
{

namespace builder
{

class Init_DrawPolygon_GetResult_Request_goal_id
{
public:
  Init_DrawPolygon_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::action::DrawPolygon_GetResult_Request goal_id(::turtle_interfaces::action::DrawPolygon_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::action::DrawPolygon_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::action::DrawPolygon_GetResult_Request>()
{
  return turtle_interfaces::action::builder::Init_DrawPolygon_GetResult_Request_goal_id();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace action
{

namespace builder
{

class Init_DrawPolygon_GetResult_Response_result
{
public:
  explicit Init_DrawPolygon_GetResult_Response_result(::turtle_interfaces::action::DrawPolygon_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::action::DrawPolygon_GetResult_Response result(::turtle_interfaces::action::DrawPolygon_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::action::DrawPolygon_GetResult_Response msg_;
};

class Init_DrawPolygon_GetResult_Response_status
{
public:
  Init_DrawPolygon_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrawPolygon_GetResult_Response_result status(::turtle_interfaces::action::DrawPolygon_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DrawPolygon_GetResult_Response_result(msg_);
  }

private:
  ::turtle_interfaces::action::DrawPolygon_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::action::DrawPolygon_GetResult_Response>()
{
  return turtle_interfaces::action::builder::Init_DrawPolygon_GetResult_Response_status();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace action
{

namespace builder
{

class Init_DrawPolygon_FeedbackMessage_feedback
{
public:
  explicit Init_DrawPolygon_FeedbackMessage_feedback(::turtle_interfaces::action::DrawPolygon_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::action::DrawPolygon_FeedbackMessage feedback(::turtle_interfaces::action::DrawPolygon_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::action::DrawPolygon_FeedbackMessage msg_;
};

class Init_DrawPolygon_FeedbackMessage_goal_id
{
public:
  Init_DrawPolygon_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrawPolygon_FeedbackMessage_feedback goal_id(::turtle_interfaces::action::DrawPolygon_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DrawPolygon_FeedbackMessage_feedback(msg_);
  }

private:
  ::turtle_interfaces::action::DrawPolygon_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::action::DrawPolygon_FeedbackMessage>()
{
  return turtle_interfaces::action::builder::Init_DrawPolygon_FeedbackMessage_goal_id();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__ACTION__DETAIL__DRAW_POLYGON__BUILDER_HPP_
