// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mark_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mark_interfaces/msg/hardware_status.hpp"


#ifndef MARK_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_
#define MARK_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mark_interfaces/msg/detail/hardware_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mark_interfaces
{

namespace msg
{

namespace builder
{

class Init_HardwareStatus_debug_message
{
public:
  explicit Init_HardwareStatus_debug_message(::mark_interfaces::msg::HardwareStatus & msg)
  : msg_(msg)
  {}
  ::mark_interfaces::msg::HardwareStatus debug_message(::mark_interfaces::msg::HardwareStatus::_debug_message_type arg)
  {
    msg_.debug_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mark_interfaces::msg::HardwareStatus msg_;
};

class Init_HardwareStatus_are_motors_ready
{
public:
  explicit Init_HardwareStatus_are_motors_ready(::mark_interfaces::msg::HardwareStatus & msg)
  : msg_(msg)
  {}
  Init_HardwareStatus_debug_message are_motors_ready(::mark_interfaces::msg::HardwareStatus::_are_motors_ready_type arg)
  {
    msg_.are_motors_ready = std::move(arg);
    return Init_HardwareStatus_debug_message(msg_);
  }

private:
  ::mark_interfaces::msg::HardwareStatus msg_;
};

class Init_HardwareStatus_temperature
{
public:
  Init_HardwareStatus_temperature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HardwareStatus_are_motors_ready temperature(::mark_interfaces::msg::HardwareStatus::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_HardwareStatus_are_motors_ready(msg_);
  }

private:
  ::mark_interfaces::msg::HardwareStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mark_interfaces::msg::HardwareStatus>()
{
  return mark_interfaces::msg::builder::Init_HardwareStatus_temperature();
}

}  // namespace mark_interfaces

#endif  // MARK_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_
