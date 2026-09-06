// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/WaypointList.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__WAYPOINT_LIST__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__WAYPOINT_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'waypoints'
#include "turtle_interfaces/msg/detail/waypoint__struct.h"

/// Struct defined in msg/WaypointList in the package turtle_interfaces.
/**
  * 문제 6 — 경유점 목록. "중첩(다른 메시지를 필드로)" 과 "배열" 을 모두 사용합니다.
  *
  * 다른 패키지의 메시지를 쓸 때는 "패키지/타입" 으로 적습니다 (std_msgs/Header).
  * 같은 패키지의 메시지는 패키지 이름 없이 타입 이름만 적어도 됩니다 (Waypoint).
  * Waypoint[] 처럼 [] 를 붙이면 가변 길이 배열이 됩니다. (고정 길이는 Waypoint)
 */
typedef struct turtle_interfaces__msg__WaypointList
{
  /// stamp(발행 시각) + frame_id(좌표계 이름, 여기서는 "world")
  std_msgs__msg__Header header;
  /// 경유점 배열 — 문제 6 에서는 4개 이상을 채워 발행합니다
  turtle_interfaces__msg__Waypoint__Sequence waypoints;
} turtle_interfaces__msg__WaypointList;

// Struct for a sequence of turtle_interfaces__msg__WaypointList.
typedef struct turtle_interfaces__msg__WaypointList__Sequence
{
  turtle_interfaces__msg__WaypointList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__WaypointList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__WAYPOINT_LIST__STRUCT_H_
