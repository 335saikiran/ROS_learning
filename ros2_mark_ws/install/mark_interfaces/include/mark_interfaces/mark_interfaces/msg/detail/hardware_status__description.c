// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mark_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

#include "mark_interfaces/msg/detail/hardware_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mark_interfaces
const rosidl_type_hash_t *
mark_interfaces__msg__HardwareStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf7, 0x97, 0x0e, 0x68, 0x84, 0x0a, 0x24, 0xd8,
      0x47, 0x96, 0xdd, 0xed, 0x90, 0x67, 0x0b, 0x78,
      0x73, 0x85, 0xc1, 0xdc, 0x31, 0xa8, 0x2d, 0x2d,
      0x53, 0xbe, 0x8b, 0x38, 0xa2, 0x7a, 0xef, 0xd3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mark_interfaces__msg__HardwareStatus__TYPE_NAME[] = "mark_interfaces/msg/HardwareStatus";

// Define type names, field names, and default values
static char mark_interfaces__msg__HardwareStatus__FIELD_NAME__temperature[] = "temperature";
static char mark_interfaces__msg__HardwareStatus__FIELD_NAME__are_motors_ready[] = "are_motors_ready";
static char mark_interfaces__msg__HardwareStatus__FIELD_NAME__debug_message[] = "debug_message";

static rosidl_runtime_c__type_description__Field mark_interfaces__msg__HardwareStatus__FIELDS[] = {
  {
    {mark_interfaces__msg__HardwareStatus__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mark_interfaces__msg__HardwareStatus__FIELD_NAME__are_motors_ready, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mark_interfaces__msg__HardwareStatus__FIELD_NAME__debug_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mark_interfaces__msg__HardwareStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mark_interfaces__msg__HardwareStatus__TYPE_NAME, 34, 34},
      {mark_interfaces__msg__HardwareStatus__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 temperature\n"
  "bool are_motors_ready\n"
  "string debug_message";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mark_interfaces__msg__HardwareStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mark_interfaces__msg__HardwareStatus__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 62, 62},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mark_interfaces__msg__HardwareStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mark_interfaces__msg__HardwareStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
