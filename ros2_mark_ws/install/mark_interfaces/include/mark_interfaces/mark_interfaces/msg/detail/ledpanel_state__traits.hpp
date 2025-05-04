// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mark_interfaces:msg/LedpanelState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mark_interfaces/msg/ledpanel_state.hpp"


#ifndef MARK_INTERFACES__MSG__DETAIL__LEDPANEL_STATE__TRAITS_HPP_
#define MARK_INTERFACES__MSG__DETAIL__LEDPANEL_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mark_interfaces/msg/detail/ledpanel_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mark_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const LedpanelState & msg,
  std::ostream & out)
{
  out << "{";
  // member: led_state
  {
    if (msg.led_state.size() == 0) {
      out << "led_state: []";
    } else {
      out << "led_state: [";
      size_t pending_items = msg.led_state.size();
      for (auto item : msg.led_state) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LedpanelState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: led_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.led_state.size() == 0) {
      out << "led_state: []\n";
    } else {
      out << "led_state:\n";
      for (auto item : msg.led_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LedpanelState & msg, bool use_flow_style = false)
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
  const mark_interfaces::msg::LedpanelState & msg,
  std::ostream & out, size_t indentation = 0)
{
  mark_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mark_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mark_interfaces::msg::LedpanelState & msg)
{
  return mark_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mark_interfaces::msg::LedpanelState>()
{
  return "mark_interfaces::msg::LedpanelState";
}

template<>
inline const char * name<mark_interfaces::msg::LedpanelState>()
{
  return "mark_interfaces/msg/LedpanelState";
}

template<>
struct has_fixed_size<mark_interfaces::msg::LedpanelState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mark_interfaces::msg::LedpanelState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mark_interfaces::msg::LedpanelState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARK_INTERFACES__MSG__DETAIL__LEDPANEL_STATE__TRAITS_HPP_
