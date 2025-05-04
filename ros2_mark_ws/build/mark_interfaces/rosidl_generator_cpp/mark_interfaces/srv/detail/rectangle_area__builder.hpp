// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mark_interfaces:srv/RectangleArea.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mark_interfaces/srv/rectangle_area.hpp"


#ifndef MARK_INTERFACES__SRV__DETAIL__RECTANGLE_AREA__BUILDER_HPP_
#define MARK_INTERFACES__SRV__DETAIL__RECTANGLE_AREA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mark_interfaces/srv/detail/rectangle_area__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mark_interfaces
{

namespace srv
{

namespace builder
{

class Init_RectangleArea_Request_width
{
public:
  explicit Init_RectangleArea_Request_width(::mark_interfaces::srv::RectangleArea_Request & msg)
  : msg_(msg)
  {}
  ::mark_interfaces::srv::RectangleArea_Request width(::mark_interfaces::srv::RectangleArea_Request::_width_type arg)
  {
    msg_.width = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mark_interfaces::srv::RectangleArea_Request msg_;
};

class Init_RectangleArea_Request_length
{
public:
  Init_RectangleArea_Request_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RectangleArea_Request_width length(::mark_interfaces::srv::RectangleArea_Request::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_RectangleArea_Request_width(msg_);
  }

private:
  ::mark_interfaces::srv::RectangleArea_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mark_interfaces::srv::RectangleArea_Request>()
{
  return mark_interfaces::srv::builder::Init_RectangleArea_Request_length();
}

}  // namespace mark_interfaces


namespace mark_interfaces
{

namespace srv
{

namespace builder
{

class Init_RectangleArea_Response_area
{
public:
  Init_RectangleArea_Response_area()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mark_interfaces::srv::RectangleArea_Response area(::mark_interfaces::srv::RectangleArea_Response::_area_type arg)
  {
    msg_.area = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mark_interfaces::srv::RectangleArea_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mark_interfaces::srv::RectangleArea_Response>()
{
  return mark_interfaces::srv::builder::Init_RectangleArea_Response_area();
}

}  // namespace mark_interfaces


namespace mark_interfaces
{

namespace srv
{

namespace builder
{

class Init_RectangleArea_Event_response
{
public:
  explicit Init_RectangleArea_Event_response(::mark_interfaces::srv::RectangleArea_Event & msg)
  : msg_(msg)
  {}
  ::mark_interfaces::srv::RectangleArea_Event response(::mark_interfaces::srv::RectangleArea_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mark_interfaces::srv::RectangleArea_Event msg_;
};

class Init_RectangleArea_Event_request
{
public:
  explicit Init_RectangleArea_Event_request(::mark_interfaces::srv::RectangleArea_Event & msg)
  : msg_(msg)
  {}
  Init_RectangleArea_Event_response request(::mark_interfaces::srv::RectangleArea_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RectangleArea_Event_response(msg_);
  }

private:
  ::mark_interfaces::srv::RectangleArea_Event msg_;
};

class Init_RectangleArea_Event_info
{
public:
  Init_RectangleArea_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RectangleArea_Event_request info(::mark_interfaces::srv::RectangleArea_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RectangleArea_Event_request(msg_);
  }

private:
  ::mark_interfaces::srv::RectangleArea_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mark_interfaces::srv::RectangleArea_Event>()
{
  return mark_interfaces::srv::builder::Init_RectangleArea_Event_info();
}

}  // namespace mark_interfaces

#endif  // MARK_INTERFACES__SRV__DETAIL__RECTANGLE_AREA__BUILDER_HPP_
