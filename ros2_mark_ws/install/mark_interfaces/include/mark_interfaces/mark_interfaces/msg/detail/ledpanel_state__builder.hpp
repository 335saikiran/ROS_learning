// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mark_interfaces:msg/LedpanelState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mark_interfaces/msg/ledpanel_state.hpp"


#ifndef MARK_INTERFACES__MSG__DETAIL__LEDPANEL_STATE__BUILDER_HPP_
#define MARK_INTERFACES__MSG__DETAIL__LEDPANEL_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mark_interfaces/msg/detail/ledpanel_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mark_interfaces
{

namespace msg
{

namespace builder
{

class Init_LedpanelState_led_state
{
public:
  Init_LedpanelState_led_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mark_interfaces::msg::LedpanelState led_state(::mark_interfaces::msg::LedpanelState::_led_state_type arg)
  {
    msg_.led_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mark_interfaces::msg::LedpanelState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mark_interfaces::msg::LedpanelState>()
{
  return mark_interfaces::msg::builder::Init_LedpanelState_led_state();
}

}  // namespace mark_interfaces

#endif  // MARK_INTERFACES__MSG__DETAIL__LEDPANEL_STATE__BUILDER_HPP_
