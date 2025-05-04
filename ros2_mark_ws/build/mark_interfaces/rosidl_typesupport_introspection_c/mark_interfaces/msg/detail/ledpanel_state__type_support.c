// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mark_interfaces:msg/LedpanelState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mark_interfaces/msg/detail/ledpanel_state__rosidl_typesupport_introspection_c.h"
#include "mark_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mark_interfaces/msg/detail/ledpanel_state__functions.h"
#include "mark_interfaces/msg/detail/ledpanel_state__struct.h"


// Include directives for member types
// Member `led_state`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mark_interfaces__msg__LedpanelState__rosidl_typesupport_introspection_c__LedpanelState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mark_interfaces__msg__LedpanelState__init(message_memory);
}

void mark_interfaces__msg__LedpanelState__rosidl_typesupport_introspection_c__LedpanelState_fini_function(void * message_memory)
{
  mark_interfaces__msg__LedpanelState__fini(message_memory);
}

size_t mark_interfaces__msg__LedpanelState__rosidl_typesupport_introspection_c__size_function__LedpanelState__led_state(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * mark_interfaces__msg__LedpanelState__rosidl_typesupport_introspection_c__get_const_function__LedpanelState__led_state(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mark_interfaces__msg__LedpanelState__rosidl_typesupport_introspection_c__get_function__LedpanelState__led_state(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void mark_interfaces__msg__LedpanelState__rosidl_typesupport_introspection_c__fetch_function__LedpanelState__led_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    mark_interfaces__msg__LedpanelState__rosidl_typesupport_introspection_c__get_const_function__LedpanelState__led_state(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void mark_interfaces__msg__LedpanelState__rosidl_typesupport_introspection_c__assign_function__LedpanelState__led_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    mark_interfaces__msg__LedpanelState__rosidl_typesupport_introspection_c__get_function__LedpanelState__led_state(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool mark_interfaces__msg__LedpanelState__rosidl_typesupport_introspection_c__resize_function__LedpanelState__led_state(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mark_interfaces__msg__LedpanelState__rosidl_typesupport_introspection_c__LedpanelState_message_member_array[1] = {
  {
    "led_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mark_interfaces__msg__LedpanelState, led_state),  // bytes offset in struct
    NULL,  // default value
    mark_interfaces__msg__LedpanelState__rosidl_typesupport_introspection_c__size_function__LedpanelState__led_state,  // size() function pointer
    mark_interfaces__msg__LedpanelState__rosidl_typesupport_introspection_c__get_const_function__LedpanelState__led_state,  // get_const(index) function pointer
    mark_interfaces__msg__LedpanelState__rosidl_typesupport_introspection_c__get_function__LedpanelState__led_state,  // get(index) function pointer
    mark_interfaces__msg__LedpanelState__rosidl_typesupport_introspection_c__fetch_function__LedpanelState__led_state,  // fetch(index, &value) function pointer
    mark_interfaces__msg__LedpanelState__rosidl_typesupport_introspection_c__assign_function__LedpanelState__led_state,  // assign(index, value) function pointer
    mark_interfaces__msg__LedpanelState__rosidl_typesupport_introspection_c__resize_function__LedpanelState__led_state  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mark_interfaces__msg__LedpanelState__rosidl_typesupport_introspection_c__LedpanelState_message_members = {
  "mark_interfaces__msg",  // message namespace
  "LedpanelState",  // message name
  1,  // number of fields
  sizeof(mark_interfaces__msg__LedpanelState),
  false,  // has_any_key_member_
  mark_interfaces__msg__LedpanelState__rosidl_typesupport_introspection_c__LedpanelState_message_member_array,  // message members
  mark_interfaces__msg__LedpanelState__rosidl_typesupport_introspection_c__LedpanelState_init_function,  // function to initialize message memory (memory has to be allocated)
  mark_interfaces__msg__LedpanelState__rosidl_typesupport_introspection_c__LedpanelState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mark_interfaces__msg__LedpanelState__rosidl_typesupport_introspection_c__LedpanelState_message_type_support_handle = {
  0,
  &mark_interfaces__msg__LedpanelState__rosidl_typesupport_introspection_c__LedpanelState_message_members,
  get_message_typesupport_handle_function,
  &mark_interfaces__msg__LedpanelState__get_type_hash,
  &mark_interfaces__msg__LedpanelState__get_type_description,
  &mark_interfaces__msg__LedpanelState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mark_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mark_interfaces, msg, LedpanelState)() {
  if (!mark_interfaces__msg__LedpanelState__rosidl_typesupport_introspection_c__LedpanelState_message_type_support_handle.typesupport_identifier) {
    mark_interfaces__msg__LedpanelState__rosidl_typesupport_introspection_c__LedpanelState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mark_interfaces__msg__LedpanelState__rosidl_typesupport_introspection_c__LedpanelState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
