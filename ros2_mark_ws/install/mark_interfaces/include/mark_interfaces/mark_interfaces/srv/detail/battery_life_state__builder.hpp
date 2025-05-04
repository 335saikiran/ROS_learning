// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mark_interfaces:srv/BatteryLifeState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mark_interfaces/srv/battery_life_state.hpp"


#ifndef MARK_INTERFACES__SRV__DETAIL__BATTERY_LIFE_STATE__BUILDER_HPP_
#define MARK_INTERFACES__SRV__DETAIL__BATTERY_LIFE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mark_interfaces/srv/detail/battery_life_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mark_interfaces
{

namespace srv
{

namespace builder
{

class Init_BatteryLifeState_Request_led_state
{
public:
  explicit Init_BatteryLifeState_Request_led_state(::mark_interfaces::srv::BatteryLifeState_Request & msg)
  : msg_(msg)
  {}
  ::mark_interfaces::srv::BatteryLifeState_Request led_state(::mark_interfaces::srv::BatteryLifeState_Request::_led_state_type arg)
  {
    msg_.led_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mark_interfaces::srv::BatteryLifeState_Request msg_;
};

class Init_BatteryLifeState_Request_led_number
{
public:
  Init_BatteryLifeState_Request_led_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryLifeState_Request_led_state led_number(::mark_interfaces::srv::BatteryLifeState_Request::_led_number_type arg)
  {
    msg_.led_number = std::move(arg);
    return Init_BatteryLifeState_Request_led_state(msg_);
  }

private:
  ::mark_interfaces::srv::BatteryLifeState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mark_interfaces::srv::BatteryLifeState_Request>()
{
  return mark_interfaces::srv::builder::Init_BatteryLifeState_Request_led_number();
}

}  // namespace mark_interfaces


namespace mark_interfaces
{

namespace srv
{

namespace builder
{

class Init_BatteryLifeState_Response_success
{
public:
  Init_BatteryLifeState_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mark_interfaces::srv::BatteryLifeState_Response success(::mark_interfaces::srv::BatteryLifeState_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mark_interfaces::srv::BatteryLifeState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mark_interfaces::srv::BatteryLifeState_Response>()
{
  return mark_interfaces::srv::builder::Init_BatteryLifeState_Response_success();
}

}  // namespace mark_interfaces


namespace mark_interfaces
{

namespace srv
{

namespace builder
{

class Init_BatteryLifeState_Event_response
{
public:
  explicit Init_BatteryLifeState_Event_response(::mark_interfaces::srv::BatteryLifeState_Event & msg)
  : msg_(msg)
  {}
  ::mark_interfaces::srv::BatteryLifeState_Event response(::mark_interfaces::srv::BatteryLifeState_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mark_interfaces::srv::BatteryLifeState_Event msg_;
};

class Init_BatteryLifeState_Event_request
{
public:
  explicit Init_BatteryLifeState_Event_request(::mark_interfaces::srv::BatteryLifeState_Event & msg)
  : msg_(msg)
  {}
  Init_BatteryLifeState_Event_response request(::mark_interfaces::srv::BatteryLifeState_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_BatteryLifeState_Event_response(msg_);
  }

private:
  ::mark_interfaces::srv::BatteryLifeState_Event msg_;
};

class Init_BatteryLifeState_Event_info
{
public:
  Init_BatteryLifeState_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryLifeState_Event_request info(::mark_interfaces::srv::BatteryLifeState_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_BatteryLifeState_Event_request(msg_);
  }

private:
  ::mark_interfaces::srv::BatteryLifeState_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mark_interfaces::srv::BatteryLifeState_Event>()
{
  return mark_interfaces::srv::builder::Init_BatteryLifeState_Event_info();
}

}  // namespace mark_interfaces

#endif  // MARK_INTERFACES__SRV__DETAIL__BATTERY_LIFE_STATE__BUILDER_HPP_
