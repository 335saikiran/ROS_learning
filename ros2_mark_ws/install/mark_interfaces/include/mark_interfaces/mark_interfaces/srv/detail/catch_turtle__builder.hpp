// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mark_interfaces:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mark_interfaces/srv/catch_turtle.hpp"


#ifndef MARK_INTERFACES__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_
#define MARK_INTERFACES__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mark_interfaces/srv/detail/catch_turtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mark_interfaces
{

namespace srv
{

namespace builder
{

class Init_CatchTurtle_Request_name
{
public:
  Init_CatchTurtle_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mark_interfaces::srv::CatchTurtle_Request name(::mark_interfaces::srv::CatchTurtle_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mark_interfaces::srv::CatchTurtle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mark_interfaces::srv::CatchTurtle_Request>()
{
  return mark_interfaces::srv::builder::Init_CatchTurtle_Request_name();
}

}  // namespace mark_interfaces


namespace mark_interfaces
{

namespace srv
{

namespace builder
{

class Init_CatchTurtle_Response_success
{
public:
  Init_CatchTurtle_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mark_interfaces::srv::CatchTurtle_Response success(::mark_interfaces::srv::CatchTurtle_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mark_interfaces::srv::CatchTurtle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mark_interfaces::srv::CatchTurtle_Response>()
{
  return mark_interfaces::srv::builder::Init_CatchTurtle_Response_success();
}

}  // namespace mark_interfaces


namespace mark_interfaces
{

namespace srv
{

namespace builder
{

class Init_CatchTurtle_Event_response
{
public:
  explicit Init_CatchTurtle_Event_response(::mark_interfaces::srv::CatchTurtle_Event & msg)
  : msg_(msg)
  {}
  ::mark_interfaces::srv::CatchTurtle_Event response(::mark_interfaces::srv::CatchTurtle_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mark_interfaces::srv::CatchTurtle_Event msg_;
};

class Init_CatchTurtle_Event_request
{
public:
  explicit Init_CatchTurtle_Event_request(::mark_interfaces::srv::CatchTurtle_Event & msg)
  : msg_(msg)
  {}
  Init_CatchTurtle_Event_response request(::mark_interfaces::srv::CatchTurtle_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CatchTurtle_Event_response(msg_);
  }

private:
  ::mark_interfaces::srv::CatchTurtle_Event msg_;
};

class Init_CatchTurtle_Event_info
{
public:
  Init_CatchTurtle_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CatchTurtle_Event_request info(::mark_interfaces::srv::CatchTurtle_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CatchTurtle_Event_request(msg_);
  }

private:
  ::mark_interfaces::srv::CatchTurtle_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mark_interfaces::srv::CatchTurtle_Event>()
{
  return mark_interfaces::srv::builder::Init_CatchTurtle_Event_info();
}

}  // namespace mark_interfaces

#endif  // MARK_INTERFACES__SRV__DETAIL__CATCH_TURTLE__BUILDER_HPP_
