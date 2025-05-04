// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mark_interfaces:action/CountUntil.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mark_interfaces/action/count_until.h"


#ifndef MARK_INTERFACES__ACTION__DETAIL__COUNT_UNTIL__STRUCT_H_
#define MARK_INTERFACES__ACTION__DETAIL__COUNT_UNTIL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/CountUntil in the package mark_interfaces.
typedef struct mark_interfaces__action__CountUntil_Goal
{
  int64_t target_number;
  double period;
} mark_interfaces__action__CountUntil_Goal;

// Struct for a sequence of mark_interfaces__action__CountUntil_Goal.
typedef struct mark_interfaces__action__CountUntil_Goal__Sequence
{
  mark_interfaces__action__CountUntil_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mark_interfaces__action__CountUntil_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/CountUntil in the package mark_interfaces.
typedef struct mark_interfaces__action__CountUntil_Result
{
  int64_t reached_number;
} mark_interfaces__action__CountUntil_Result;

// Struct for a sequence of mark_interfaces__action__CountUntil_Result.
typedef struct mark_interfaces__action__CountUntil_Result__Sequence
{
  mark_interfaces__action__CountUntil_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mark_interfaces__action__CountUntil_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/CountUntil in the package mark_interfaces.
typedef struct mark_interfaces__action__CountUntil_Feedback
{
  int64_t current_number;
} mark_interfaces__action__CountUntil_Feedback;

// Struct for a sequence of mark_interfaces__action__CountUntil_Feedback.
typedef struct mark_interfaces__action__CountUntil_Feedback__Sequence
{
  mark_interfaces__action__CountUntil_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mark_interfaces__action__CountUntil_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "mark_interfaces/action/detail/count_until__struct.h"

/// Struct defined in action/CountUntil in the package mark_interfaces.
typedef struct mark_interfaces__action__CountUntil_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  mark_interfaces__action__CountUntil_Goal goal;
} mark_interfaces__action__CountUntil_SendGoal_Request;

// Struct for a sequence of mark_interfaces__action__CountUntil_SendGoal_Request.
typedef struct mark_interfaces__action__CountUntil_SendGoal_Request__Sequence
{
  mark_interfaces__action__CountUntil_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mark_interfaces__action__CountUntil_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/CountUntil in the package mark_interfaces.
typedef struct mark_interfaces__action__CountUntil_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} mark_interfaces__action__CountUntil_SendGoal_Response;

// Struct for a sequence of mark_interfaces__action__CountUntil_SendGoal_Response.
typedef struct mark_interfaces__action__CountUntil_SendGoal_Response__Sequence
{
  mark_interfaces__action__CountUntil_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mark_interfaces__action__CountUntil_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mark_interfaces__action__CountUntil_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mark_interfaces__action__CountUntil_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/CountUntil in the package mark_interfaces.
typedef struct mark_interfaces__action__CountUntil_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mark_interfaces__action__CountUntil_SendGoal_Request__Sequence request;
  mark_interfaces__action__CountUntil_SendGoal_Response__Sequence response;
} mark_interfaces__action__CountUntil_SendGoal_Event;

// Struct for a sequence of mark_interfaces__action__CountUntil_SendGoal_Event.
typedef struct mark_interfaces__action__CountUntil_SendGoal_Event__Sequence
{
  mark_interfaces__action__CountUntil_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mark_interfaces__action__CountUntil_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/CountUntil in the package mark_interfaces.
typedef struct mark_interfaces__action__CountUntil_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} mark_interfaces__action__CountUntil_GetResult_Request;

// Struct for a sequence of mark_interfaces__action__CountUntil_GetResult_Request.
typedef struct mark_interfaces__action__CountUntil_GetResult_Request__Sequence
{
  mark_interfaces__action__CountUntil_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mark_interfaces__action__CountUntil_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "mark_interfaces/action/detail/count_until__struct.h"

/// Struct defined in action/CountUntil in the package mark_interfaces.
typedef struct mark_interfaces__action__CountUntil_GetResult_Response
{
  int8_t status;
  mark_interfaces__action__CountUntil_Result result;
} mark_interfaces__action__CountUntil_GetResult_Response;

// Struct for a sequence of mark_interfaces__action__CountUntil_GetResult_Response.
typedef struct mark_interfaces__action__CountUntil_GetResult_Response__Sequence
{
  mark_interfaces__action__CountUntil_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mark_interfaces__action__CountUntil_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mark_interfaces__action__CountUntil_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mark_interfaces__action__CountUntil_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/CountUntil in the package mark_interfaces.
typedef struct mark_interfaces__action__CountUntil_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mark_interfaces__action__CountUntil_GetResult_Request__Sequence request;
  mark_interfaces__action__CountUntil_GetResult_Response__Sequence response;
} mark_interfaces__action__CountUntil_GetResult_Event;

// Struct for a sequence of mark_interfaces__action__CountUntil_GetResult_Event.
typedef struct mark_interfaces__action__CountUntil_GetResult_Event__Sequence
{
  mark_interfaces__action__CountUntil_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mark_interfaces__action__CountUntil_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "mark_interfaces/action/detail/count_until__struct.h"

/// Struct defined in action/CountUntil in the package mark_interfaces.
typedef struct mark_interfaces__action__CountUntil_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  mark_interfaces__action__CountUntil_Feedback feedback;
} mark_interfaces__action__CountUntil_FeedbackMessage;

// Struct for a sequence of mark_interfaces__action__CountUntil_FeedbackMessage.
typedef struct mark_interfaces__action__CountUntil_FeedbackMessage__Sequence
{
  mark_interfaces__action__CountUntil_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mark_interfaces__action__CountUntil_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARK_INTERFACES__ACTION__DETAIL__COUNT_UNTIL__STRUCT_H_
