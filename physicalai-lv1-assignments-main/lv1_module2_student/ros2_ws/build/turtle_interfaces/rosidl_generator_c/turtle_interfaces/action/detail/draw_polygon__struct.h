// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:action/DrawPolygon.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__ACTION__DETAIL__DRAW_POLYGON__STRUCT_H_
#define TURTLE_INTERFACES__ACTION__DETAIL__DRAW_POLYGON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/DrawPolygon in the package turtle_interfaces.
typedef struct turtle_interfaces__action__DrawPolygon_Goal
{
  /// ---------- 목표 (goal) ----------
  /// 변의 개수 (3 이상)
  int32_t sides;
  /// 한 변의 길이
  double side_length;
} turtle_interfaces__action__DrawPolygon_Goal;

// Struct for a sequence of turtle_interfaces__action__DrawPolygon_Goal.
typedef struct turtle_interfaces__action__DrawPolygon_Goal__Sequence
{
  turtle_interfaces__action__DrawPolygon_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__action__DrawPolygon_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/DrawPolygon in the package turtle_interfaces.
typedef struct turtle_interfaces__action__DrawPolygon_Result
{
  /// 실제로 이동한 총 거리 (취소되면 그때까지의 거리)
  double total_distance;
} turtle_interfaces__action__DrawPolygon_Result;

// Struct for a sequence of turtle_interfaces__action__DrawPolygon_Result.
typedef struct turtle_interfaces__action__DrawPolygon_Result__Sequence
{
  turtle_interfaces__action__DrawPolygon_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__action__DrawPolygon_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/DrawPolygon in the package turtle_interfaces.
typedef struct turtle_interfaces__action__DrawPolygon_Feedback
{
  /// 지금까지 완성한 변의 수
  int32_t completed_sides;
  /// 진행률 0.0 ~ 1.0 (= completed_sides / sides)
  float progress;
} turtle_interfaces__action__DrawPolygon_Feedback;

// Struct for a sequence of turtle_interfaces__action__DrawPolygon_Feedback.
typedef struct turtle_interfaces__action__DrawPolygon_Feedback__Sequence
{
  turtle_interfaces__action__DrawPolygon_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__action__DrawPolygon_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "turtle_interfaces/action/detail/draw_polygon__struct.h"

/// Struct defined in action/DrawPolygon in the package turtle_interfaces.
typedef struct turtle_interfaces__action__DrawPolygon_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  turtle_interfaces__action__DrawPolygon_Goal goal;
} turtle_interfaces__action__DrawPolygon_SendGoal_Request;

// Struct for a sequence of turtle_interfaces__action__DrawPolygon_SendGoal_Request.
typedef struct turtle_interfaces__action__DrawPolygon_SendGoal_Request__Sequence
{
  turtle_interfaces__action__DrawPolygon_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__action__DrawPolygon_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/DrawPolygon in the package turtle_interfaces.
typedef struct turtle_interfaces__action__DrawPolygon_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} turtle_interfaces__action__DrawPolygon_SendGoal_Response;

// Struct for a sequence of turtle_interfaces__action__DrawPolygon_SendGoal_Response.
typedef struct turtle_interfaces__action__DrawPolygon_SendGoal_Response__Sequence
{
  turtle_interfaces__action__DrawPolygon_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__action__DrawPolygon_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/DrawPolygon in the package turtle_interfaces.
typedef struct turtle_interfaces__action__DrawPolygon_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} turtle_interfaces__action__DrawPolygon_GetResult_Request;

// Struct for a sequence of turtle_interfaces__action__DrawPolygon_GetResult_Request.
typedef struct turtle_interfaces__action__DrawPolygon_GetResult_Request__Sequence
{
  turtle_interfaces__action__DrawPolygon_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__action__DrawPolygon_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "turtle_interfaces/action/detail/draw_polygon__struct.h"

/// Struct defined in action/DrawPolygon in the package turtle_interfaces.
typedef struct turtle_interfaces__action__DrawPolygon_GetResult_Response
{
  int8_t status;
  turtle_interfaces__action__DrawPolygon_Result result;
} turtle_interfaces__action__DrawPolygon_GetResult_Response;

// Struct for a sequence of turtle_interfaces__action__DrawPolygon_GetResult_Response.
typedef struct turtle_interfaces__action__DrawPolygon_GetResult_Response__Sequence
{
  turtle_interfaces__action__DrawPolygon_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__action__DrawPolygon_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "turtle_interfaces/action/detail/draw_polygon__struct.h"

/// Struct defined in action/DrawPolygon in the package turtle_interfaces.
typedef struct turtle_interfaces__action__DrawPolygon_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  turtle_interfaces__action__DrawPolygon_Feedback feedback;
} turtle_interfaces__action__DrawPolygon_FeedbackMessage;

// Struct for a sequence of turtle_interfaces__action__DrawPolygon_FeedbackMessage.
typedef struct turtle_interfaces__action__DrawPolygon_FeedbackMessage__Sequence
{
  turtle_interfaces__action__DrawPolygon_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__action__DrawPolygon_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__ACTION__DETAIL__DRAW_POLYGON__STRUCT_H_
