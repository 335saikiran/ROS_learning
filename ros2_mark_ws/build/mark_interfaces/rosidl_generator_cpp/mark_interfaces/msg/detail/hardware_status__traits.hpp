// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mark_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mark_interfaces/msg/hardware_status.hpp"


#ifndef MARK_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__TRAITS_HPP_
#define MARK_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mark_interfaces/msg/detail/hardware_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mark_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const HardwareStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: are_motors_ready
  {
    out << "are_motors_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.are_motors_ready, out);
    out << ", ";
  }

  // member: debug_message
  {
    out << "debug_message: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HardwareStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: are_motors_ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "are_motors_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.are_motors_ready, out);
    out << "\n";
  }

  // member: debug_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug_message: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HardwareStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mark_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mark_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mark_interfaces::msg::HardwareStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  mark_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mark_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mark_interfaces::msg::HardwareStatus & msg)
{
  return mark_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mark_interfaces::msg::HardwareStatus>()
{
  return "mark_interfaces::msg::HardwareStatus";
}

template<>
inline const char * name<mark_interfaces::msg::HardwareStatus>()
{
  return "mark_interfaces/msg/HardwareStatus";
}

template<>
struct has_fixed_size<mark_interfaces::msg::HardwareStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mark_interfaces::msg::HardwareStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mark_interfaces::msg::HardwareStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARK_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__TRAITS_HPP_
