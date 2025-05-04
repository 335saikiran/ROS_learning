// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mark_interfaces:msg/LedpanelState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mark_interfaces/msg/ledpanel_state.h"


#ifndef MARK_INTERFACES__MSG__DETAIL__LEDPANEL_STATE__STRUCT_H_
#define MARK_INTERFACES__MSG__DETAIL__LEDPANEL_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'led_state'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/LedpanelState in the package mark_interfaces.
typedef struct mark_interfaces__msg__LedpanelState
{
  rosidl_runtime_c__int64__Sequence led_state;
} mark_interfaces__msg__LedpanelState;

// Struct for a sequence of mark_interfaces__msg__LedpanelState.
typedef struct mark_interfaces__msg__LedpanelState__Sequence
{
  mark_interfaces__msg__LedpanelState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mark_interfaces__msg__LedpanelState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARK_INTERFACES__MSG__DETAIL__LEDPANEL_STATE__STRUCT_H_
