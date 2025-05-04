// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mark_interfaces:msg/Turtle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mark_interfaces/msg/turtle.hpp"


#ifndef MARK_INTERFACES__MSG__DETAIL__TURTLE__BUILDER_HPP_
#define MARK_INTERFACES__MSG__DETAIL__TURTLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mark_interfaces/msg/detail/turtle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mark_interfaces
{

namespace msg
{

namespace builder
{

class Init_Turtle_theta
{
public:
  explicit Init_Turtle_theta(::mark_interfaces::msg::Turtle & msg)
  : msg_(msg)
  {}
  ::mark_interfaces::msg::Turtle theta(::mark_interfaces::msg::Turtle::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mark_interfaces::msg::Turtle msg_;
};

class Init_Turtle_y
{
public:
  explicit Init_Turtle_y(::mark_interfaces::msg::Turtle & msg)
  : msg_(msg)
  {}
  Init_Turtle_theta y(::mark_interfaces::msg::Turtle::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Turtle_theta(msg_);
  }

private:
  ::mark_interfaces::msg::Turtle msg_;
};

class Init_Turtle_x
{
public:
  explicit Init_Turtle_x(::mark_interfaces::msg::Turtle & msg)
  : msg_(msg)
  {}
  Init_Turtle_y x(::mark_interfaces::msg::Turtle::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Turtle_y(msg_);
  }

private:
  ::mark_interfaces::msg::Turtle msg_;
};

class Init_Turtle_name
{
public:
  Init_Turtle_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Turtle_x name(::mark_interfaces::msg::Turtle::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Turtle_x(msg_);
  }

private:
  ::mark_interfaces::msg::Turtle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mark_interfaces::msg::Turtle>()
{
  return mark_interfaces::msg::builder::Init_Turtle_name();
}

}  // namespace mark_interfaces

#endif  // MARK_INTERFACES__MSG__DETAIL__TURTLE__BUILDER_HPP_
