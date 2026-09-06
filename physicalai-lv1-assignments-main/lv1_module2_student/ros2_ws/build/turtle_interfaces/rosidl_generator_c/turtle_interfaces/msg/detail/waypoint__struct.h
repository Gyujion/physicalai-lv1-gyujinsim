// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__WAYPOINT__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Waypoint in the package turtle_interfaces.
/**
  * 문제 6 — 경유점 하나를 표현하는 메시지.
  * 좌표는 정밀도를 위해 float64, 허용 오차는 float32 로 두어
  * "같은 메시지 안에서 서로 다른 실수 타입을 쓸 수 있다" 는 점을 보여 줍니다.
  * (turtlesim 의 Pose 는 float32 지만, 경유점 좌표는 double 로 두는 편이 일반적입니다.)
 */
typedef struct turtle_interfaces__msg__Waypoint
{
  /// 경유점 x 좌표 (turtlesim 좌표계, 0 ~ 11)
  double x;
  /// 경유점 y 좌표
  double y;
  /// 도달 판정 허용 오차 — 이 거리 이내면 "도달" 로 봅니다
  float tolerance;
  /// 사람이 읽는 이름 (예: "corner_A")
  rosidl_runtime_c__String label;
} turtle_interfaces__msg__Waypoint;

// Struct for a sequence of turtle_interfaces__msg__Waypoint.
typedef struct turtle_interfaces__msg__Waypoint__Sequence
{
  turtle_interfaces__msg__Waypoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__Waypoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__WAYPOINT__STRUCT_H_
