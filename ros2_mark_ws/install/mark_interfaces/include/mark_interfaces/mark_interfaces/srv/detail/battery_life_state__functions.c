// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mark_interfaces:srv/BatteryLifeState.idl
// generated code does not contain a copyright notice
#include "mark_interfaces/srv/detail/battery_life_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
mark_interfaces__srv__BatteryLifeState_Request__init(mark_interfaces__srv__BatteryLifeState_Request * msg)
{
  if (!msg) {
    return false;
  }
  // led_number
  // led_state
  return true;
}

void
mark_interfaces__srv__BatteryLifeState_Request__fini(mark_interfaces__srv__BatteryLifeState_Request * msg)
{
  if (!msg) {
    return;
  }
  // led_number
  // led_state
}

bool
mark_interfaces__srv__BatteryLifeState_Request__are_equal(const mark_interfaces__srv__BatteryLifeState_Request * lhs, const mark_interfaces__srv__BatteryLifeState_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // led_number
  if (lhs->led_number != rhs->led_number) {
    return false;
  }
  // led_state
  if (lhs->led_state != rhs->led_state) {
    return false;
  }
  return true;
}

bool
mark_interfaces__srv__BatteryLifeState_Request__copy(
  const mark_interfaces__srv__BatteryLifeState_Request * input,
  mark_interfaces__srv__BatteryLifeState_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // led_number
  output->led_number = input->led_number;
  // led_state
  output->led_state = input->led_state;
  return true;
}

mark_interfaces__srv__BatteryLifeState_Request *
mark_interfaces__srv__BatteryLifeState_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__srv__BatteryLifeState_Request * msg = (mark_interfaces__srv__BatteryLifeState_Request *)allocator.allocate(sizeof(mark_interfaces__srv__BatteryLifeState_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mark_interfaces__srv__BatteryLifeState_Request));
  bool success = mark_interfaces__srv__BatteryLifeState_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mark_interfaces__srv__BatteryLifeState_Request__destroy(mark_interfaces__srv__BatteryLifeState_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mark_interfaces__srv__BatteryLifeState_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mark_interfaces__srv__BatteryLifeState_Request__Sequence__init(mark_interfaces__srv__BatteryLifeState_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__srv__BatteryLifeState_Request * data = NULL;

  if (size) {
    data = (mark_interfaces__srv__BatteryLifeState_Request *)allocator.zero_allocate(size, sizeof(mark_interfaces__srv__BatteryLifeState_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mark_interfaces__srv__BatteryLifeState_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mark_interfaces__srv__BatteryLifeState_Request__fini(&data[i - 1]);
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
mark_interfaces__srv__BatteryLifeState_Request__Sequence__fini(mark_interfaces__srv__BatteryLifeState_Request__Sequence * array)
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
      mark_interfaces__srv__BatteryLifeState_Request__fini(&array->data[i]);
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

mark_interfaces__srv__BatteryLifeState_Request__Sequence *
mark_interfaces__srv__BatteryLifeState_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__srv__BatteryLifeState_Request__Sequence * array = (mark_interfaces__srv__BatteryLifeState_Request__Sequence *)allocator.allocate(sizeof(mark_interfaces__srv__BatteryLifeState_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mark_interfaces__srv__BatteryLifeState_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mark_interfaces__srv__BatteryLifeState_Request__Sequence__destroy(mark_interfaces__srv__BatteryLifeState_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mark_interfaces__srv__BatteryLifeState_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mark_interfaces__srv__BatteryLifeState_Request__Sequence__are_equal(const mark_interfaces__srv__BatteryLifeState_Request__Sequence * lhs, const mark_interfaces__srv__BatteryLifeState_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mark_interfaces__srv__BatteryLifeState_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mark_interfaces__srv__BatteryLifeState_Request__Sequence__copy(
  const mark_interfaces__srv__BatteryLifeState_Request__Sequence * input,
  mark_interfaces__srv__BatteryLifeState_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mark_interfaces__srv__BatteryLifeState_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mark_interfaces__srv__BatteryLifeState_Request * data =
      (mark_interfaces__srv__BatteryLifeState_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mark_interfaces__srv__BatteryLifeState_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mark_interfaces__srv__BatteryLifeState_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mark_interfaces__srv__BatteryLifeState_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
mark_interfaces__srv__BatteryLifeState_Response__init(mark_interfaces__srv__BatteryLifeState_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
mark_interfaces__srv__BatteryLifeState_Response__fini(mark_interfaces__srv__BatteryLifeState_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
mark_interfaces__srv__BatteryLifeState_Response__are_equal(const mark_interfaces__srv__BatteryLifeState_Response * lhs, const mark_interfaces__srv__BatteryLifeState_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
mark_interfaces__srv__BatteryLifeState_Response__copy(
  const mark_interfaces__srv__BatteryLifeState_Response * input,
  mark_interfaces__srv__BatteryLifeState_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

mark_interfaces__srv__BatteryLifeState_Response *
mark_interfaces__srv__BatteryLifeState_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__srv__BatteryLifeState_Response * msg = (mark_interfaces__srv__BatteryLifeState_Response *)allocator.allocate(sizeof(mark_interfaces__srv__BatteryLifeState_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mark_interfaces__srv__BatteryLifeState_Response));
  bool success = mark_interfaces__srv__BatteryLifeState_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mark_interfaces__srv__BatteryLifeState_Response__destroy(mark_interfaces__srv__BatteryLifeState_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mark_interfaces__srv__BatteryLifeState_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mark_interfaces__srv__BatteryLifeState_Response__Sequence__init(mark_interfaces__srv__BatteryLifeState_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__srv__BatteryLifeState_Response * data = NULL;

  if (size) {
    data = (mark_interfaces__srv__BatteryLifeState_Response *)allocator.zero_allocate(size, sizeof(mark_interfaces__srv__BatteryLifeState_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mark_interfaces__srv__BatteryLifeState_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mark_interfaces__srv__BatteryLifeState_Response__fini(&data[i - 1]);
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
mark_interfaces__srv__BatteryLifeState_Response__Sequence__fini(mark_interfaces__srv__BatteryLifeState_Response__Sequence * array)
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
      mark_interfaces__srv__BatteryLifeState_Response__fini(&array->data[i]);
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

mark_interfaces__srv__BatteryLifeState_Response__Sequence *
mark_interfaces__srv__BatteryLifeState_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__srv__BatteryLifeState_Response__Sequence * array = (mark_interfaces__srv__BatteryLifeState_Response__Sequence *)allocator.allocate(sizeof(mark_interfaces__srv__BatteryLifeState_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mark_interfaces__srv__BatteryLifeState_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mark_interfaces__srv__BatteryLifeState_Response__Sequence__destroy(mark_interfaces__srv__BatteryLifeState_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mark_interfaces__srv__BatteryLifeState_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mark_interfaces__srv__BatteryLifeState_Response__Sequence__are_equal(const mark_interfaces__srv__BatteryLifeState_Response__Sequence * lhs, const mark_interfaces__srv__BatteryLifeState_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mark_interfaces__srv__BatteryLifeState_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mark_interfaces__srv__BatteryLifeState_Response__Sequence__copy(
  const mark_interfaces__srv__BatteryLifeState_Response__Sequence * input,
  mark_interfaces__srv__BatteryLifeState_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mark_interfaces__srv__BatteryLifeState_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mark_interfaces__srv__BatteryLifeState_Response * data =
      (mark_interfaces__srv__BatteryLifeState_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mark_interfaces__srv__BatteryLifeState_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mark_interfaces__srv__BatteryLifeState_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mark_interfaces__srv__BatteryLifeState_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "mark_interfaces/srv/detail/battery_life_state__functions.h"

bool
mark_interfaces__srv__BatteryLifeState_Event__init(mark_interfaces__srv__BatteryLifeState_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    mark_interfaces__srv__BatteryLifeState_Event__fini(msg);
    return false;
  }
  // request
  if (!mark_interfaces__srv__BatteryLifeState_Request__Sequence__init(&msg->request, 0)) {
    mark_interfaces__srv__BatteryLifeState_Event__fini(msg);
    return false;
  }
  // response
  if (!mark_interfaces__srv__BatteryLifeState_Response__Sequence__init(&msg->response, 0)) {
    mark_interfaces__srv__BatteryLifeState_Event__fini(msg);
    return false;
  }
  return true;
}

void
mark_interfaces__srv__BatteryLifeState_Event__fini(mark_interfaces__srv__BatteryLifeState_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  mark_interfaces__srv__BatteryLifeState_Request__Sequence__fini(&msg->request);
  // response
  mark_interfaces__srv__BatteryLifeState_Response__Sequence__fini(&msg->response);
}

bool
mark_interfaces__srv__BatteryLifeState_Event__are_equal(const mark_interfaces__srv__BatteryLifeState_Event * lhs, const mark_interfaces__srv__BatteryLifeState_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!mark_interfaces__srv__BatteryLifeState_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!mark_interfaces__srv__BatteryLifeState_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
mark_interfaces__srv__BatteryLifeState_Event__copy(
  const mark_interfaces__srv__BatteryLifeState_Event * input,
  mark_interfaces__srv__BatteryLifeState_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!mark_interfaces__srv__BatteryLifeState_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!mark_interfaces__srv__BatteryLifeState_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

mark_interfaces__srv__BatteryLifeState_Event *
mark_interfaces__srv__BatteryLifeState_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__srv__BatteryLifeState_Event * msg = (mark_interfaces__srv__BatteryLifeState_Event *)allocator.allocate(sizeof(mark_interfaces__srv__BatteryLifeState_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mark_interfaces__srv__BatteryLifeState_Event));
  bool success = mark_interfaces__srv__BatteryLifeState_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mark_interfaces__srv__BatteryLifeState_Event__destroy(mark_interfaces__srv__BatteryLifeState_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mark_interfaces__srv__BatteryLifeState_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mark_interfaces__srv__BatteryLifeState_Event__Sequence__init(mark_interfaces__srv__BatteryLifeState_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__srv__BatteryLifeState_Event * data = NULL;

  if (size) {
    data = (mark_interfaces__srv__BatteryLifeState_Event *)allocator.zero_allocate(size, sizeof(mark_interfaces__srv__BatteryLifeState_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mark_interfaces__srv__BatteryLifeState_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mark_interfaces__srv__BatteryLifeState_Event__fini(&data[i - 1]);
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
mark_interfaces__srv__BatteryLifeState_Event__Sequence__fini(mark_interfaces__srv__BatteryLifeState_Event__Sequence * array)
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
      mark_interfaces__srv__BatteryLifeState_Event__fini(&array->data[i]);
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

mark_interfaces__srv__BatteryLifeState_Event__Sequence *
mark_interfaces__srv__BatteryLifeState_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__srv__BatteryLifeState_Event__Sequence * array = (mark_interfaces__srv__BatteryLifeState_Event__Sequence *)allocator.allocate(sizeof(mark_interfaces__srv__BatteryLifeState_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mark_interfaces__srv__BatteryLifeState_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mark_interfaces__srv__BatteryLifeState_Event__Sequence__destroy(mark_interfaces__srv__BatteryLifeState_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mark_interfaces__srv__BatteryLifeState_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mark_interfaces__srv__BatteryLifeState_Event__Sequence__are_equal(const mark_interfaces__srv__BatteryLifeState_Event__Sequence * lhs, const mark_interfaces__srv__BatteryLifeState_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mark_interfaces__srv__BatteryLifeState_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mark_interfaces__srv__BatteryLifeState_Event__Sequence__copy(
  const mark_interfaces__srv__BatteryLifeState_Event__Sequence * input,
  mark_interfaces__srv__BatteryLifeState_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mark_interfaces__srv__BatteryLifeState_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mark_interfaces__srv__BatteryLifeState_Event * data =
      (mark_interfaces__srv__BatteryLifeState_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mark_interfaces__srv__BatteryLifeState_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mark_interfaces__srv__BatteryLifeState_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mark_interfaces__srv__BatteryLifeState_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
