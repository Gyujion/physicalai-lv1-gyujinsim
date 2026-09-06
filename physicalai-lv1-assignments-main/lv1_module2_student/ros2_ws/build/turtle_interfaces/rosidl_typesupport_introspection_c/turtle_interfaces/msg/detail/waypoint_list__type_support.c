// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtle_interfaces:msg/WaypointList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtle_interfaces/msg/detail/waypoint_list__rosidl_typesupport_introspection_c.h"
#include "turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtle_interfaces/msg/detail/waypoint_list__functions.h"
#include "turtle_interfaces/msg/detail/waypoint_list__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `waypoints`
#include "turtle_interfaces/msg/waypoint.h"
// Member `waypoints`
#include "turtle_interfaces/msg/detail/waypoint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtle_interfaces__msg__WaypointList__init(message_memory);
}

void turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_fini_function(void * message_memory)
{
  turtle_interfaces__msg__WaypointList__fini(message_memory);
}

size_t turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__size_function__WaypointList__waypoints(
  const void * untyped_member)
{
  const turtle_interfaces__msg__Waypoint__Sequence * member =
    (const turtle_interfaces__msg__Waypoint__Sequence *)(untyped_member);
  return member->size;
}

const void * turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__get_const_function__WaypointList__waypoints(
  const void * untyped_member, size_t index)
{
  const turtle_interfaces__msg__Waypoint__Sequence * member =
    (const turtle_interfaces__msg__Waypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__get_function__WaypointList__waypoints(
  void * untyped_member, size_t index)
{
  turtle_interfaces__msg__Waypoint__Sequence * member =
    (turtle_interfaces__msg__Waypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__fetch_function__WaypointList__waypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const turtle_interfaces__msg__Waypoint * item =
    ((const turtle_interfaces__msg__Waypoint *)
    turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__get_const_function__WaypointList__waypoints(untyped_member, index));
  turtle_interfaces__msg__Waypoint * value =
    (turtle_interfaces__msg__Waypoint *)(untyped_value);
  *value = *item;
}

void turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__assign_function__WaypointList__waypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  turtle_interfaces__msg__Waypoint * item =
    ((turtle_interfaces__msg__Waypoint *)
    turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__get_function__WaypointList__waypoints(untyped_member, index));
  const turtle_interfaces__msg__Waypoint * value =
    (const turtle_interfaces__msg__Waypoint *)(untyped_value);
  *item = *value;
}

bool turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__resize_function__WaypointList__waypoints(
  void * untyped_member, size_t size)
{
  turtle_interfaces__msg__Waypoint__Sequence * member =
    (turtle_interfaces__msg__Waypoint__Sequence *)(untyped_member);
  turtle_interfaces__msg__Waypoint__Sequence__fini(member);
  return turtle_interfaces__msg__Waypoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__msg__WaypointList, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__msg__WaypointList, waypoints),  // bytes offset in struct
    NULL,  // default value
    turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__size_function__WaypointList__waypoints,  // size() function pointer
    turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__get_const_function__WaypointList__waypoints,  // get_const(index) function pointer
    turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__get_function__WaypointList__waypoints,  // get(index) function pointer
    turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__fetch_function__WaypointList__waypoints,  // fetch(index, &value) function pointer
    turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__assign_function__WaypointList__waypoints,  // assign(index, value) function pointer
    turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__resize_function__WaypointList__waypoints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_members = {
  "turtle_interfaces__msg",  // message namespace
  "WaypointList",  // message name
  2,  // number of fields
  sizeof(turtle_interfaces__msg__WaypointList),
  turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_member_array,  // message members
  turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_init_function,  // function to initialize message memory (memory has to be allocated)
  turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_type_support_handle = {
  0,
  &turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, msg, WaypointList)() {
  turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, msg, Waypoint)();
  if (!turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_type_support_handle.typesupport_identifier) {
    turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &turtle_interfaces__msg__WaypointList__rosidl_typesupport_introspection_c__WaypointList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
