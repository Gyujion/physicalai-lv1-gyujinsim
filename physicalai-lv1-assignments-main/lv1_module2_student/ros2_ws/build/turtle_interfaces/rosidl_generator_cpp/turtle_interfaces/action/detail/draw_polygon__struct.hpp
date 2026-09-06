// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:action/DrawPolygon.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__ACTION__DETAIL__DRAW_POLYGON__STRUCT_HPP_
#define TURTLE_INTERFACES__ACTION__DETAIL__DRAW_POLYGON__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__action__DrawPolygon_Goal __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__action__DrawPolygon_Goal __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DrawPolygon_Goal_
{
  using Type = DrawPolygon_Goal_<ContainerAllocator>;

  explicit DrawPolygon_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sides = 0l;
      this->side_length = 0.0;
    }
  }

  explicit DrawPolygon_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sides = 0l;
      this->side_length = 0.0;
    }
  }

  // field types and members
  using _sides_type =
    int32_t;
  _sides_type sides;
  using _side_length_type =
    double;
  _side_length_type side_length;

  // setters for named parameter idiom
  Type & set__sides(
    const int32_t & _arg)
  {
    this->sides = _arg;
    return *this;
  }
  Type & set__side_length(
    const double & _arg)
  {
    this->side_length = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::action::DrawPolygon_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::action::DrawPolygon_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::action::DrawPolygon_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::action::DrawPolygon_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::action::DrawPolygon_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::action::DrawPolygon_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::action::DrawPolygon_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::action::DrawPolygon_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__action__DrawPolygon_Goal
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__action__DrawPolygon_Goal
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrawPolygon_Goal_ & other) const
  {
    if (this->sides != other.sides) {
      return false;
    }
    if (this->side_length != other.side_length) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrawPolygon_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrawPolygon_Goal_

// alias to use template instance with default allocator
using DrawPolygon_Goal =
  turtle_interfaces::action::DrawPolygon_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtle_interfaces


#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__action__DrawPolygon_Result __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__action__DrawPolygon_Result __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DrawPolygon_Result_
{
  using Type = DrawPolygon_Result_<ContainerAllocator>;

  explicit DrawPolygon_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->total_distance = 0.0;
    }
  }

  explicit DrawPolygon_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->total_distance = 0.0;
    }
  }

  // field types and members
  using _total_distance_type =
    double;
  _total_distance_type total_distance;

  // setters for named parameter idiom
  Type & set__total_distance(
    const double & _arg)
  {
    this->total_distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::action::DrawPolygon_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::action::DrawPolygon_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::action::DrawPolygon_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::action::DrawPolygon_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::action::DrawPolygon_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::action::DrawPolygon_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::action::DrawPolygon_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::action::DrawPolygon_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__action__DrawPolygon_Result
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__action__DrawPolygon_Result
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrawPolygon_Result_ & other) const
  {
    if (this->total_distance != other.total_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrawPolygon_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrawPolygon_Result_

// alias to use template instance with default allocator
using DrawPolygon_Result =
  turtle_interfaces::action::DrawPolygon_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtle_interfaces


#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__action__DrawPolygon_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__action__DrawPolygon_Feedback __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DrawPolygon_Feedback_
{
  using Type = DrawPolygon_Feedback_<ContainerAllocator>;

  explicit DrawPolygon_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->completed_sides = 0l;
      this->progress = 0.0f;
    }
  }

  explicit DrawPolygon_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->completed_sides = 0l;
      this->progress = 0.0f;
    }
  }

  // field types and members
  using _completed_sides_type =
    int32_t;
  _completed_sides_type completed_sides;
  using _progress_type =
    float;
  _progress_type progress;

  // setters for named parameter idiom
  Type & set__completed_sides(
    const int32_t & _arg)
  {
    this->completed_sides = _arg;
    return *this;
  }
  Type & set__progress(
    const float & _arg)
  {
    this->progress = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::action::DrawPolygon_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::action::DrawPolygon_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::action::DrawPolygon_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::action::DrawPolygon_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::action::DrawPolygon_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::action::DrawPolygon_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::action::DrawPolygon_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::action::DrawPolygon_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__action__DrawPolygon_Feedback
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__action__DrawPolygon_Feedback
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrawPolygon_Feedback_ & other) const
  {
    if (this->completed_sides != other.completed_sides) {
      return false;
    }
    if (this->progress != other.progress) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrawPolygon_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrawPolygon_Feedback_

// alias to use template instance with default allocator
using DrawPolygon_Feedback =
  turtle_interfaces::action::DrawPolygon_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtle_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "turtle_interfaces/action/detail/draw_polygon__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__action__DrawPolygon_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__action__DrawPolygon_SendGoal_Request __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DrawPolygon_SendGoal_Request_
{
  using Type = DrawPolygon_SendGoal_Request_<ContainerAllocator>;

  explicit DrawPolygon_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit DrawPolygon_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    turtle_interfaces::action::DrawPolygon_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const turtle_interfaces::action::DrawPolygon_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::action::DrawPolygon_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::action::DrawPolygon_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::action::DrawPolygon_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::action::DrawPolygon_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::action::DrawPolygon_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::action::DrawPolygon_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::action::DrawPolygon_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::action::DrawPolygon_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__action__DrawPolygon_SendGoal_Request
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__action__DrawPolygon_SendGoal_Request
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrawPolygon_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrawPolygon_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrawPolygon_SendGoal_Request_

// alias to use template instance with default allocator
using DrawPolygon_SendGoal_Request =
  turtle_interfaces::action::DrawPolygon_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtle_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__action__DrawPolygon_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__action__DrawPolygon_SendGoal_Response __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DrawPolygon_SendGoal_Response_
{
  using Type = DrawPolygon_SendGoal_Response_<ContainerAllocator>;

  explicit DrawPolygon_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit DrawPolygon_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::action::DrawPolygon_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::action::DrawPolygon_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::action::DrawPolygon_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::action::DrawPolygon_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::action::DrawPolygon_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::action::DrawPolygon_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::action::DrawPolygon_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::action::DrawPolygon_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__action__DrawPolygon_SendGoal_Response
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__action__DrawPolygon_SendGoal_Response
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrawPolygon_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrawPolygon_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrawPolygon_SendGoal_Response_

// alias to use template instance with default allocator
using DrawPolygon_SendGoal_Response =
  turtle_interfaces::action::DrawPolygon_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtle_interfaces

namespace turtle_interfaces
{

namespace action
{

struct DrawPolygon_SendGoal
{
  using Request = turtle_interfaces::action::DrawPolygon_SendGoal_Request;
  using Response = turtle_interfaces::action::DrawPolygon_SendGoal_Response;
};

}  // namespace action

}  // namespace turtle_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__action__DrawPolygon_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__action__DrawPolygon_GetResult_Request __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DrawPolygon_GetResult_Request_
{
  using Type = DrawPolygon_GetResult_Request_<ContainerAllocator>;

  explicit DrawPolygon_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit DrawPolygon_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::action::DrawPolygon_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::action::DrawPolygon_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::action::DrawPolygon_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::action::DrawPolygon_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::action::DrawPolygon_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::action::DrawPolygon_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::action::DrawPolygon_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::action::DrawPolygon_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__action__DrawPolygon_GetResult_Request
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__action__DrawPolygon_GetResult_Request
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrawPolygon_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrawPolygon_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrawPolygon_GetResult_Request_

// alias to use template instance with default allocator
using DrawPolygon_GetResult_Request =
  turtle_interfaces::action::DrawPolygon_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtle_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "turtle_interfaces/action/detail/draw_polygon__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__action__DrawPolygon_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__action__DrawPolygon_GetResult_Response __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DrawPolygon_GetResult_Response_
{
  using Type = DrawPolygon_GetResult_Response_<ContainerAllocator>;

  explicit DrawPolygon_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit DrawPolygon_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    turtle_interfaces::action::DrawPolygon_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const turtle_interfaces::action::DrawPolygon_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::action::DrawPolygon_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::action::DrawPolygon_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::action::DrawPolygon_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::action::DrawPolygon_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::action::DrawPolygon_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::action::DrawPolygon_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::action::DrawPolygon_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::action::DrawPolygon_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__action__DrawPolygon_GetResult_Response
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__action__DrawPolygon_GetResult_Response
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrawPolygon_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrawPolygon_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrawPolygon_GetResult_Response_

// alias to use template instance with default allocator
using DrawPolygon_GetResult_Response =
  turtle_interfaces::action::DrawPolygon_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtle_interfaces

namespace turtle_interfaces
{

namespace action
{

struct DrawPolygon_GetResult
{
  using Request = turtle_interfaces::action::DrawPolygon_GetResult_Request;
  using Response = turtle_interfaces::action::DrawPolygon_GetResult_Response;
};

}  // namespace action

}  // namespace turtle_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "turtle_interfaces/action/detail/draw_polygon__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__action__DrawPolygon_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__action__DrawPolygon_FeedbackMessage __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DrawPolygon_FeedbackMessage_
{
  using Type = DrawPolygon_FeedbackMessage_<ContainerAllocator>;

  explicit DrawPolygon_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit DrawPolygon_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    turtle_interfaces::action::DrawPolygon_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const turtle_interfaces::action::DrawPolygon_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::action::DrawPolygon_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::action::DrawPolygon_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::action::DrawPolygon_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::action::DrawPolygon_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::action::DrawPolygon_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::action::DrawPolygon_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::action::DrawPolygon_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::action::DrawPolygon_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__action__DrawPolygon_FeedbackMessage
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__action__DrawPolygon_FeedbackMessage
    std::shared_ptr<turtle_interfaces::action::DrawPolygon_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrawPolygon_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrawPolygon_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrawPolygon_FeedbackMessage_

// alias to use template instance with default allocator
using DrawPolygon_FeedbackMessage =
  turtle_interfaces::action::DrawPolygon_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace turtle_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace turtle_interfaces
{

namespace action
{

struct DrawPolygon
{
  /// The goal message defined in the action definition.
  using Goal = turtle_interfaces::action::DrawPolygon_Goal;
  /// The result message defined in the action definition.
  using Result = turtle_interfaces::action::DrawPolygon_Result;
  /// The feedback message defined in the action definition.
  using Feedback = turtle_interfaces::action::DrawPolygon_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = turtle_interfaces::action::DrawPolygon_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = turtle_interfaces::action::DrawPolygon_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = turtle_interfaces::action::DrawPolygon_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct DrawPolygon DrawPolygon;

}  // namespace action

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__ACTION__DETAIL__DRAW_POLYGON__STRUCT_HPP_
