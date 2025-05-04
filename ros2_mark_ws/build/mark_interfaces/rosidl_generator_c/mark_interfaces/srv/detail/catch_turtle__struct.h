// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mark_interfaces:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mark_interfaces/srv/catch_turtle.h"


#ifndef MARK_INTERFACES__SRV__DETAIL__CATCH_TURTLE__STRUCT_H_
#define MARK_INTERFACES__SRV__DETAIL__CATCH_TURTLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CatchTurtle in the package mark_interfaces.
typedef struct mark_interfaces__srv__CatchTurtle_Request
{
  rosidl_runtime_c__String name;
} mark_interfaces__srv__CatchTurtle_Request;

// Struct for a sequence of mark_interfaces__srv__CatchTurtle_Request.
typedef struct mark_interfaces__srv__CatchTurtle_Request__Sequence
{
  mark_interfaces__srv__CatchTurtle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mark_interfaces__srv__CatchTurtle_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/CatchTurtle in the package mark_interfaces.
typedef struct mark_interfaces__srv__CatchTurtle_Response
{
  bool success;
} mark_interfaces__srv__CatchTurtle_Response;

// Struct for a sequence of mark_interfaces__srv__CatchTurtle_Response.
typedef struct mark_interfaces__srv__CatchTurtle_Response__Sequence
{
  mark_interfaces__srv__CatchTurtle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mark_interfaces__srv__CatchTurtle_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mark_interfaces__srv__CatchTurtle_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mark_interfaces__srv__CatchTurtle_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CatchTurtle in the package mark_interfaces.
typedef struct mark_interfaces__srv__CatchTurtle_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mark_interfaces__srv__CatchTurtle_Request__Sequence request;
  mark_interfaces__srv__CatchTurtle_Response__Sequence response;
} mark_interfaces__srv__CatchTurtle_Event;

// Struct for a sequence of mark_interfaces__srv__CatchTurtle_Event.
typedef struct mark_interfaces__srv__CatchTurtle_Event__Sequence
{
  mark_interfaces__srv__CatchTurtle_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mark_interfaces__srv__CatchTurtle_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARK_INTERFACES__SRV__DETAIL__CATCH_TURTLE__STRUCT_H_
