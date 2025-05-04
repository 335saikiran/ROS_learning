// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mark_interfaces:msg/LedpanelState.idl
// generated code does not contain a copyright notice
#include "mark_interfaces/msg/detail/ledpanel_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `led_state`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
mark_interfaces__msg__LedpanelState__init(mark_interfaces__msg__LedpanelState * msg)
{
  if (!msg) {
    return false;
  }
  // led_state
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->led_state, 0)) {
    mark_interfaces__msg__LedpanelState__fini(msg);
    return false;
  }
  return true;
}

void
mark_interfaces__msg__LedpanelState__fini(mark_interfaces__msg__LedpanelState * msg)
{
  if (!msg) {
    return;
  }
  // led_state
  rosidl_runtime_c__int64__Sequence__fini(&msg->led_state);
}

bool
mark_interfaces__msg__LedpanelState__are_equal(const mark_interfaces__msg__LedpanelState * lhs, const mark_interfaces__msg__LedpanelState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // led_state
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->led_state), &(rhs->led_state)))
  {
    return false;
  }
  return true;
}

bool
mark_interfaces__msg__LedpanelState__copy(
  const mark_interfaces__msg__LedpanelState * input,
  mark_interfaces__msg__LedpanelState * output)
{
  if (!input || !output) {
    return false;
  }
  // led_state
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->led_state), &(output->led_state)))
  {
    return false;
  }
  return true;
}

mark_interfaces__msg__LedpanelState *
mark_interfaces__msg__LedpanelState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__msg__LedpanelState * msg = (mark_interfaces__msg__LedpanelState *)allocator.allocate(sizeof(mark_interfaces__msg__LedpanelState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mark_interfaces__msg__LedpanelState));
  bool success = mark_interfaces__msg__LedpanelState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mark_interfaces__msg__LedpanelState__destroy(mark_interfaces__msg__LedpanelState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mark_interfaces__msg__LedpanelState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mark_interfaces__msg__LedpanelState__Sequence__init(mark_interfaces__msg__LedpanelState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__msg__LedpanelState * data = NULL;

  if (size) {
    data = (mark_interfaces__msg__LedpanelState *)allocator.zero_allocate(size, sizeof(mark_interfaces__msg__LedpanelState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mark_interfaces__msg__LedpanelState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mark_interfaces__msg__LedpanelState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mark_interfaces__msg__LedpanelState__Sequence__fini(mark_interfaces__msg__LedpanelState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mark_interfaces__msg__LedpanelState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mark_interfaces__msg__LedpanelState__Sequence *
mark_interfaces__msg__LedpanelState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__msg__LedpanelState__Sequence * array = (mark_interfaces__msg__LedpanelState__Sequence *)allocator.allocate(sizeof(mark_interfaces__msg__LedpanelState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mark_interfaces__msg__LedpanelState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mark_interfaces__msg__LedpanelState__Sequence__destroy(mark_interfaces__msg__LedpanelState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mark_interfaces__msg__LedpanelState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mark_interfaces__msg__LedpanelState__Sequence__are_equal(const mark_interfaces__msg__LedpanelState__Sequence * lhs, const mark_interfaces__msg__LedpanelState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mark_interfaces__msg__LedpanelState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mark_interfaces__msg__LedpanelState__Sequence__copy(
  const mark_interfaces__msg__LedpanelState__Sequence * input,
  mark_interfaces__msg__LedpanelState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mark_interfaces__msg__LedpanelState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mark_interfaces__msg__LedpanelState * data =
      (mark_interfaces__msg__LedpanelState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mark_interfaces__msg__LedpanelState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mark_interfaces__msg__LedpanelState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mark_interfaces__msg__LedpanelState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
