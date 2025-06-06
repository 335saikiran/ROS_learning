// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mark_interfaces:msg/LedpanelState.idl
// generated code does not contain a copyright notice
#include "mark_interfaces/msg/detail/ledpanel_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mark_interfaces/msg/detail/ledpanel_state__functions.h"
#include "mark_interfaces/msg/detail/ledpanel_state__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace mark_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mark_interfaces
cdr_serialize(
  const mark_interfaces::msg::LedpanelState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: led_state
  {
    cdr << ros_message.led_state;
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mark_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mark_interfaces::msg::LedpanelState & ros_message)
{
  // Member: led_state
  {
    cdr >> ros_message.led_state;
  }

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mark_interfaces
get_serialized_size(
  const mark_interfaces::msg::LedpanelState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: led_state
  {
    size_t array_size = ros_message.led_state.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.led_state[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mark_interfaces
max_serialized_size_LedpanelState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: led_state
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mark_interfaces::msg::LedpanelState;
    is_plain =
      (
      offsetof(DataType, led_state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mark_interfaces
cdr_serialize_key(
  const mark_interfaces::msg::LedpanelState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: led_state
  {
    cdr << ros_message.led_state;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mark_interfaces
get_serialized_size_key(
  const mark_interfaces::msg::LedpanelState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: led_state
  {
    size_t array_size = ros_message.led_state.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.led_state[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mark_interfaces
max_serialized_size_key_LedpanelState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: led_state
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mark_interfaces::msg::LedpanelState;
    is_plain =
      (
      offsetof(DataType, led_state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _LedpanelState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mark_interfaces::msg::LedpanelState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LedpanelState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mark_interfaces::msg::LedpanelState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LedpanelState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mark_interfaces::msg::LedpanelState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LedpanelState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LedpanelState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LedpanelState__callbacks = {
  "mark_interfaces::msg",
  "LedpanelState",
  _LedpanelState__cdr_serialize,
  _LedpanelState__cdr_deserialize,
  _LedpanelState__get_serialized_size,
  _LedpanelState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LedpanelState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LedpanelState__callbacks,
  get_message_typesupport_handle_function,
  &mark_interfaces__msg__LedpanelState__get_type_hash,
  &mark_interfaces__msg__LedpanelState__get_type_description,
  &mark_interfaces__msg__LedpanelState__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mark_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mark_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<mark_interfaces::msg::LedpanelState>()
{
  return &mark_interfaces::msg::typesupport_fastrtps_cpp::_LedpanelState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mark_interfaces, msg, LedpanelState)() {
  return &mark_interfaces::msg::typesupport_fastrtps_cpp::_LedpanelState__handle;
}

#ifdef __cplusplus
}
#endif
