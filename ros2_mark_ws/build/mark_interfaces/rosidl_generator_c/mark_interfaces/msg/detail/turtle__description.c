// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mark_interfaces:msg/Turtle.idl
// generated code does not contain a copyright notice

#include "mark_interfaces/msg/detail/turtle__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mark_interfaces
const rosidl_type_hash_t *
mark_interfaces__msg__Turtle__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x26, 0x41, 0x5a, 0x64, 0xba, 0x35, 0x0e, 0xb3,
      0x7b, 0x8e, 0xfc, 0x7f, 0xcd, 0x1f, 0xa6, 0xe1,
      0xc2, 0x4d, 0x66, 0xa2, 0x90, 0x21, 0x0c, 0xcb,
      0x90, 0x02, 0x42, 0xbe, 0xd6, 0x61, 0x1b, 0x35,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mark_interfaces__msg__Turtle__TYPE_NAME[] = "mark_interfaces/msg/Turtle";

// Define type names, field names, and default values
static char mark_interfaces__msg__Turtle__FIELD_NAME__name[] = "name";
static char mark_interfaces__msg__Turtle__FIELD_NAME__x[] = "x";
static char mark_interfaces__msg__Turtle__FIELD_NAME__y[] = "y";
static char mark_interfaces__msg__Turtle__FIELD_NAME__theta[] = "theta";

static rosidl_runtime_c__type_description__Field mark_interfaces__msg__Turtle__FIELDS[] = {
  {
    {mark_interfaces__msg__Turtle__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mark_interfaces__msg__Turtle__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mark_interfaces__msg__Turtle__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mark_interfaces__msg__Turtle__FIELD_NAME__theta, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mark_interfaces__msg__Turtle__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mark_interfaces__msg__Turtle__TYPE_NAME, 26, 26},
      {mark_interfaces__msg__Turtle__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "float64 x\n"
  "float64 y\n"
  "float64 theta";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mark_interfaces__msg__Turtle__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mark_interfaces__msg__Turtle__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 45, 45},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mark_interfaces__msg__Turtle__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mark_interfaces__msg__Turtle__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
