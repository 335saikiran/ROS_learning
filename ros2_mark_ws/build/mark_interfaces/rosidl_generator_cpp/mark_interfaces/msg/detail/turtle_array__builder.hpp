// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mark_interfaces:msg/TurtleArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mark_interfaces/msg/turtle_array.hpp"


#ifndef MARK_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__BUILDER_HPP_
#define MARK_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mark_interfaces/msg/detail/turtle_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mark_interfaces
{

namespace msg
{

namespace builder
{

class Init_TurtleArray_turtles
{
public:
  Init_TurtleArray_turtles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mark_interfaces::msg::TurtleArray turtles(::mark_interfaces::msg::TurtleArray::_turtles_type arg)
  {
    msg_.turtles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mark_interfaces::msg::TurtleArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mark_interfaces::msg::TurtleArray>()
{
  return mark_interfaces::msg::builder::Init_TurtleArray_turtles();
}

}  // namespace mark_interfaces

#endif  // MARK_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__BUILDER_HPP_
