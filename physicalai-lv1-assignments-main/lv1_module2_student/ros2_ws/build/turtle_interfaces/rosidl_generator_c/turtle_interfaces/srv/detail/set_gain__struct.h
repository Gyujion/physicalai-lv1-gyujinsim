// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:srv/SetGain.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__SRV__DETAIL__SET_GAIN__STRUCT_H_
#define TURTLE_INTERFACES__SRV__DETAIL__SET_GAIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetGain in the package turtle_interfaces.
typedef struct turtle_interfaces__srv__SetGain_Request
{
  /// ---------- 요청 ----------
  /// 비례 게인
  double kp;
  /// 적분 게인
  double ki;
  /// 미분 게인
  double kd;
} turtle_interfaces__srv__SetGain_Request;

// Struct for a sequence of turtle_interfaces__srv__SetGain_Request.
typedef struct turtle_interfaces__srv__SetGain_Request__Sequence
{
  turtle_interfaces__srv__SetGain_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__srv__SetGain_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetGain in the package turtle_interfaces.
typedef struct turtle_interfaces__srv__SetGain_Response
{
  /// 값이 유효해서 적용됐는지
  bool success;
  /// 사람이 읽을 결과 설명 (예: "kp must be >= 0")
  rosidl_runtime_c__String message;
} turtle_interfaces__srv__SetGain_Response;

// Struct for a sequence of turtle_interfaces__srv__SetGain_Response.
typedef struct turtle_interfaces__srv__SetGain_Response__Sequence
{
  turtle_interfaces__srv__SetGain_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__srv__SetGain_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__SRV__DETAIL__SET_GAIN__STRUCT_H_
