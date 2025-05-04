// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mark_interfaces:msg/TurtleArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mark_interfaces/msg/turtle_array.h"


#ifndef MARK_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__STRUCT_H_
#define MARK_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'turtles'
#include "mark_interfaces/msg/detail/turtle__struct.h"

/// Struct defined in msg/TurtleArray in the package mark_interfaces.
typedef struct mark_interfaces__msg__TurtleArray
{
  mark_interfaces__msg__Turtle__Sequence turtles;
} mark_interfaces__msg__TurtleArray;

// Struct for a sequence of mark_interfaces__msg__TurtleArray.
typedef struct mark_interfaces__msg__TurtleArray__Sequence
{
  mark_interfaces__msg__TurtleArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mark_interfaces__msg__TurtleArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARK_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__STRUCT_H_
