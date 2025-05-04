// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mark_interfaces:msg/LedpanelState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mark_interfaces/msg/ledpanel_state.hpp"


#ifndef MARK_INTERFACES__MSG__DETAIL__LEDPANEL_STATE__STRUCT_HPP_
#define MARK_INTERFACES__MSG__DETAIL__LEDPANEL_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mark_interfaces__msg__LedpanelState __attribute__((deprecated))
#else
# define DEPRECATED__mark_interfaces__msg__LedpanelState __declspec(deprecated)
#endif

namespace mark_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LedpanelState_
{
  using Type = LedpanelState_<ContainerAllocator>;

  explicit LedpanelState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit LedpanelState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _led_state_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _led_state_type led_state;

  // setters for named parameter idiom
  Type & set__led_state(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->led_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mark_interfaces::msg::LedpanelState_<ContainerAllocator> *;
  using ConstRawPtr =
    const mark_interfaces::msg::LedpanelState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mark_interfaces::msg::LedpanelState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mark_interfaces::msg::LedpanelState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mark_interfaces::msg::LedpanelState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mark_interfaces::msg::LedpanelState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mark_interfaces::msg::LedpanelState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mark_interfaces::msg::LedpanelState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mark_interfaces::msg::LedpanelState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mark_interfaces::msg::LedpanelState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mark_interfaces__msg__LedpanelState
    std::shared_ptr<mark_interfaces::msg::LedpanelState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mark_interfaces__msg__LedpanelState
    std::shared_ptr<mark_interfaces::msg::LedpanelState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedpanelState_ & other) const
  {
    if (this->led_state != other.led_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedpanelState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedpanelState_

// alias to use template instance with default allocator
using LedpanelState =
  mark_interfaces::msg::LedpanelState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mark_interfaces

#endif  // MARK_INTERFACES__MSG__DETAIL__LEDPANEL_STATE__STRUCT_HPP_
