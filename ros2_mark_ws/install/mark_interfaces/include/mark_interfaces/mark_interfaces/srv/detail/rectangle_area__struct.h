// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mark_interfaces:srv/RectangleArea.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mark_interfaces/srv/rectangle_area.h"


#ifndef MARK_INTERFACES__SRV__DETAIL__RECTANGLE_AREA__STRUCT_H_
#define MARK_INTERFACES__SRV__DETAIL__RECTANGLE_AREA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RectangleArea in the package mark_interfaces.
typedef struct mark_interfaces__srv__RectangleArea_Request
{
  double length;
  double width;
} mark_interfaces__srv__RectangleArea_Request;

// Struct for a sequence of mark_interfaces__srv__RectangleArea_Request.
typedef struct mark_interfaces__srv__RectangleArea_Request__Sequence
{
  mark_interfaces__srv__RectangleArea_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mark_interfaces__srv__RectangleArea_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/RectangleArea in the package mark_interfaces.
typedef struct mark_interfaces__srv__RectangleArea_Response
{
  double area;
} mark_interfaces__srv__RectangleArea_Response;

// Struct for a sequence of mark_interfaces__srv__RectangleArea_Response.
typedef struct mark_interfaces__srv__RectangleArea_Response__Sequence
{
  mark_interfaces__srv__RectangleArea_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mark_interfaces__srv__RectangleArea_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mark_interfaces__srv__RectangleArea_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mark_interfaces__srv__RectangleArea_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/RectangleArea in the package mark_interfaces.
typedef struct mark_interfaces__srv__RectangleArea_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mark_interfaces__srv__RectangleArea_Request__Sequence request;
  mark_interfaces__srv__RectangleArea_Response__Sequence response;
} mark_interfaces__srv__RectangleArea_Event;

// Struct for a sequence of mark_interfaces__srv__RectangleArea_Event.
typedef struct mark_interfaces__srv__RectangleArea_Event__Sequence
{
  mark_interfaces__srv__RectangleArea_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mark_interfaces__srv__RectangleArea_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARK_INTERFACES__SRV__DETAIL__RECTANGLE_AREA__STRUCT_H_
