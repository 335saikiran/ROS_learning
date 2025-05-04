// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from mark_interfaces:msg/LedpanelState.idl
// generated code does not contain a copyright notice

#ifndef MARK_INTERFACES__MSG__DETAIL__LEDPANEL_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MARK_INTERFACES__MSG__DETAIL__LEDPANEL_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mark_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "mark_interfaces/msg/detail/ledpanel_state__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

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
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mark_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mark_interfaces::msg::LedpanelState & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mark_interfaces
get_serialized_size(
  const mark_interfaces::msg::LedpanelState & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mark_interfaces
max_serialized_size_LedpanelState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mark_interfaces
cdr_serialize_key(
  const mark_interfaces::msg::LedpanelState & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mark_interfaces
get_serialized_size_key(
  const mark_interfaces::msg::LedpanelState & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mark_interfaces
max_serialized_size_key_LedpanelState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mark_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mark_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mark_interfaces, msg, LedpanelState)();

#ifdef __cplusplus
}
#endif

#endif  // MARK_INTERFACES__MSG__DETAIL__LEDPANEL_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
