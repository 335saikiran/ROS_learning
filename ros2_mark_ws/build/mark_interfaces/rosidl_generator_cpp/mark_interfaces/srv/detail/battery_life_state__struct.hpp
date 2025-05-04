// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mark_interfaces:srv/BatteryLifeState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mark_interfaces/srv/battery_life_state.hpp"


#ifndef MARK_INTERFACES__SRV__DETAIL__BATTERY_LIFE_STATE__STRUCT_HPP_
#define MARK_INTERFACES__SRV__DETAIL__BATTERY_LIFE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mark_interfaces__srv__BatteryLifeState_Request __attribute__((deprecated))
#else
# define DEPRECATED__mark_interfaces__srv__BatteryLifeState_Request __declspec(deprecated)
#endif

namespace mark_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BatteryLifeState_Request_
{
  using Type = BatteryLifeState_Request_<ContainerAllocator>;

  explicit BatteryLifeState_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_number = 0ll;
      this->led_state = false;
    }
  }

  explicit BatteryLifeState_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_number = 0ll;
      this->led_state = false;
    }
  }

  // field types and members
  using _led_number_type =
    int64_t;
  _led_number_type led_number;
  using _led_state_type =
    bool;
  _led_state_type led_state;

  // setters for named parameter idiom
  Type & set__led_number(
    const int64_t & _arg)
  {
    this->led_number = _arg;
    return *this;
  }
  Type & set__led_state(
    const bool & _arg)
  {
    this->led_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mark_interfaces::srv::BatteryLifeState_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mark_interfaces::srv::BatteryLifeState_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mark_interfaces::srv::BatteryLifeState_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mark_interfaces::srv::BatteryLifeState_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mark_interfaces::srv::BatteryLifeState_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mark_interfaces::srv::BatteryLifeState_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mark_interfaces::srv::BatteryLifeState_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mark_interfaces::srv::BatteryLifeState_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mark_interfaces::srv::BatteryLifeState_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mark_interfaces::srv::BatteryLifeState_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mark_interfaces__srv__BatteryLifeState_Request
    std::shared_ptr<mark_interfaces::srv::BatteryLifeState_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mark_interfaces__srv__BatteryLifeState_Request
    std::shared_ptr<mark_interfaces::srv::BatteryLifeState_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryLifeState_Request_ & other) const
  {
    if (this->led_number != other.led_number) {
      return false;
    }
    if (this->led_state != other.led_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryLifeState_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryLifeState_Request_

// alias to use template instance with default allocator
using BatteryLifeState_Request =
  mark_interfaces::srv::BatteryLifeState_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mark_interfaces


#ifndef _WIN32
# define DEPRECATED__mark_interfaces__srv__BatteryLifeState_Response __attribute__((deprecated))
#else
# define DEPRECATED__mark_interfaces__srv__BatteryLifeState_Response __declspec(deprecated)
#endif

namespace mark_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BatteryLifeState_Response_
{
  using Type = BatteryLifeState_Response_<ContainerAllocator>;

  explicit BatteryLifeState_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit BatteryLifeState_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mark_interfaces::srv::BatteryLifeState_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mark_interfaces::srv::BatteryLifeState_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mark_interfaces::srv::BatteryLifeState_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mark_interfaces::srv::BatteryLifeState_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mark_interfaces::srv::BatteryLifeState_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mark_interfaces::srv::BatteryLifeState_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mark_interfaces::srv::BatteryLifeState_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mark_interfaces::srv::BatteryLifeState_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mark_interfaces::srv::BatteryLifeState_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mark_interfaces::srv::BatteryLifeState_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mark_interfaces__srv__BatteryLifeState_Response
    std::shared_ptr<mark_interfaces::srv::BatteryLifeState_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mark_interfaces__srv__BatteryLifeState_Response
    std::shared_ptr<mark_interfaces::srv::BatteryLifeState_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryLifeState_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryLifeState_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryLifeState_Response_

// alias to use template instance with default allocator
using BatteryLifeState_Response =
  mark_interfaces::srv::BatteryLifeState_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mark_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mark_interfaces__srv__BatteryLifeState_Event __attribute__((deprecated))
#else
# define DEPRECATED__mark_interfaces__srv__BatteryLifeState_Event __declspec(deprecated)
#endif

namespace mark_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BatteryLifeState_Event_
{
  using Type = BatteryLifeState_Event_<ContainerAllocator>;

  explicit BatteryLifeState_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit BatteryLifeState_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<mark_interfaces::srv::BatteryLifeState_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mark_interfaces::srv::BatteryLifeState_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<mark_interfaces::srv::BatteryLifeState_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mark_interfaces::srv::BatteryLifeState_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<mark_interfaces::srv::BatteryLifeState_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mark_interfaces::srv::BatteryLifeState_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<mark_interfaces::srv::BatteryLifeState_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mark_interfaces::srv::BatteryLifeState_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mark_interfaces::srv::BatteryLifeState_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const mark_interfaces::srv::BatteryLifeState_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mark_interfaces::srv::BatteryLifeState_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mark_interfaces::srv::BatteryLifeState_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mark_interfaces::srv::BatteryLifeState_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mark_interfaces::srv::BatteryLifeState_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mark_interfaces::srv::BatteryLifeState_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mark_interfaces::srv::BatteryLifeState_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mark_interfaces::srv::BatteryLifeState_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mark_interfaces::srv::BatteryLifeState_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mark_interfaces__srv__BatteryLifeState_Event
    std::shared_ptr<mark_interfaces::srv::BatteryLifeState_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mark_interfaces__srv__BatteryLifeState_Event
    std::shared_ptr<mark_interfaces::srv::BatteryLifeState_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryLifeState_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryLifeState_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryLifeState_Event_

// alias to use template instance with default allocator
using BatteryLifeState_Event =
  mark_interfaces::srv::BatteryLifeState_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mark_interfaces

namespace mark_interfaces
{

namespace srv
{

struct BatteryLifeState
{
  using Request = mark_interfaces::srv::BatteryLifeState_Request;
  using Response = mark_interfaces::srv::BatteryLifeState_Response;
  using Event = mark_interfaces::srv::BatteryLifeState_Event;
};

}  // namespace srv

}  // namespace mark_interfaces

#endif  // MARK_INTERFACES__SRV__DETAIL__BATTERY_LIFE_STATE__STRUCT_HPP_
