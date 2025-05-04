// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from mark_interfaces:srv/BatteryLifeState.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mark_interfaces/srv/detail/battery_life_state__functions.h"
#include "mark_interfaces/srv/detail/battery_life_state__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace mark_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _BatteryLifeState_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BatteryLifeState_Request_type_support_ids_t;

static const _BatteryLifeState_Request_type_support_ids_t _BatteryLifeState_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BatteryLifeState_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BatteryLifeState_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatteryLifeState_Request_type_support_symbol_names_t _BatteryLifeState_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mark_interfaces, srv, BatteryLifeState_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mark_interfaces, srv, BatteryLifeState_Request)),
  }
};

typedef struct _BatteryLifeState_Request_type_support_data_t
{
  void * data[2];
} _BatteryLifeState_Request_type_support_data_t;

static _BatteryLifeState_Request_type_support_data_t _BatteryLifeState_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatteryLifeState_Request_message_typesupport_map = {
  2,
  "mark_interfaces",
  &_BatteryLifeState_Request_message_typesupport_ids.typesupport_identifier[0],
  &_BatteryLifeState_Request_message_typesupport_symbol_names.symbol_name[0],
  &_BatteryLifeState_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BatteryLifeState_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatteryLifeState_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mark_interfaces__srv__BatteryLifeState_Request__get_type_hash,
  &mark_interfaces__srv__BatteryLifeState_Request__get_type_description,
  &mark_interfaces__srv__BatteryLifeState_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mark_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mark_interfaces::srv::BatteryLifeState_Request>()
{
  return &::mark_interfaces::srv::rosidl_typesupport_cpp::BatteryLifeState_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mark_interfaces, srv, BatteryLifeState_Request)() {
  return get_message_type_support_handle<mark_interfaces::srv::BatteryLifeState_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mark_interfaces/srv/detail/battery_life_state__functions.h"
// already included above
// #include "mark_interfaces/srv/detail/battery_life_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mark_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _BatteryLifeState_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BatteryLifeState_Response_type_support_ids_t;

static const _BatteryLifeState_Response_type_support_ids_t _BatteryLifeState_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BatteryLifeState_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BatteryLifeState_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatteryLifeState_Response_type_support_symbol_names_t _BatteryLifeState_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mark_interfaces, srv, BatteryLifeState_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mark_interfaces, srv, BatteryLifeState_Response)),
  }
};

typedef struct _BatteryLifeState_Response_type_support_data_t
{
  void * data[2];
} _BatteryLifeState_Response_type_support_data_t;

static _BatteryLifeState_Response_type_support_data_t _BatteryLifeState_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatteryLifeState_Response_message_typesupport_map = {
  2,
  "mark_interfaces",
  &_BatteryLifeState_Response_message_typesupport_ids.typesupport_identifier[0],
  &_BatteryLifeState_Response_message_typesupport_symbol_names.symbol_name[0],
  &_BatteryLifeState_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BatteryLifeState_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatteryLifeState_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mark_interfaces__srv__BatteryLifeState_Response__get_type_hash,
  &mark_interfaces__srv__BatteryLifeState_Response__get_type_description,
  &mark_interfaces__srv__BatteryLifeState_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mark_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mark_interfaces::srv::BatteryLifeState_Response>()
{
  return &::mark_interfaces::srv::rosidl_typesupport_cpp::BatteryLifeState_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mark_interfaces, srv, BatteryLifeState_Response)() {
  return get_message_type_support_handle<mark_interfaces::srv::BatteryLifeState_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mark_interfaces/srv/detail/battery_life_state__functions.h"
// already included above
// #include "mark_interfaces/srv/detail/battery_life_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mark_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _BatteryLifeState_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BatteryLifeState_Event_type_support_ids_t;

static const _BatteryLifeState_Event_type_support_ids_t _BatteryLifeState_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BatteryLifeState_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BatteryLifeState_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatteryLifeState_Event_type_support_symbol_names_t _BatteryLifeState_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mark_interfaces, srv, BatteryLifeState_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mark_interfaces, srv, BatteryLifeState_Event)),
  }
};

typedef struct _BatteryLifeState_Event_type_support_data_t
{
  void * data[2];
} _BatteryLifeState_Event_type_support_data_t;

static _BatteryLifeState_Event_type_support_data_t _BatteryLifeState_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatteryLifeState_Event_message_typesupport_map = {
  2,
  "mark_interfaces",
  &_BatteryLifeState_Event_message_typesupport_ids.typesupport_identifier[0],
  &_BatteryLifeState_Event_message_typesupport_symbol_names.symbol_name[0],
  &_BatteryLifeState_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BatteryLifeState_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatteryLifeState_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mark_interfaces__srv__BatteryLifeState_Event__get_type_hash,
  &mark_interfaces__srv__BatteryLifeState_Event__get_type_description,
  &mark_interfaces__srv__BatteryLifeState_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mark_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mark_interfaces::srv::BatteryLifeState_Event>()
{
  return &::mark_interfaces::srv::rosidl_typesupport_cpp::BatteryLifeState_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mark_interfaces, srv, BatteryLifeState_Event)() {
  return get_message_type_support_handle<mark_interfaces::srv::BatteryLifeState_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "mark_interfaces/srv/detail/battery_life_state__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mark_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _BatteryLifeState_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BatteryLifeState_type_support_ids_t;

static const _BatteryLifeState_type_support_ids_t _BatteryLifeState_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BatteryLifeState_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BatteryLifeState_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatteryLifeState_type_support_symbol_names_t _BatteryLifeState_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mark_interfaces, srv, BatteryLifeState)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mark_interfaces, srv, BatteryLifeState)),
  }
};

typedef struct _BatteryLifeState_type_support_data_t
{
  void * data[2];
} _BatteryLifeState_type_support_data_t;

static _BatteryLifeState_type_support_data_t _BatteryLifeState_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatteryLifeState_service_typesupport_map = {
  2,
  "mark_interfaces",
  &_BatteryLifeState_service_typesupport_ids.typesupport_identifier[0],
  &_BatteryLifeState_service_typesupport_symbol_names.symbol_name[0],
  &_BatteryLifeState_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t BatteryLifeState_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatteryLifeState_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mark_interfaces::srv::BatteryLifeState_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mark_interfaces::srv::BatteryLifeState_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mark_interfaces::srv::BatteryLifeState_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<mark_interfaces::srv::BatteryLifeState>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<mark_interfaces::srv::BatteryLifeState>,
  &mark_interfaces__srv__BatteryLifeState__get_type_hash,
  &mark_interfaces__srv__BatteryLifeState__get_type_description,
  &mark_interfaces__srv__BatteryLifeState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mark_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<mark_interfaces::srv::BatteryLifeState>()
{
  return &::mark_interfaces::srv::rosidl_typesupport_cpp::BatteryLifeState_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, mark_interfaces, srv, BatteryLifeState)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<mark_interfaces::srv::BatteryLifeState>();
}

#ifdef __cplusplus
}
#endif
