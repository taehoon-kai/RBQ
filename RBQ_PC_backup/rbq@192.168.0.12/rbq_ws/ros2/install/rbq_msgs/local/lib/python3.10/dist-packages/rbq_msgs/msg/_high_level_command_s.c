// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rbq_msgs:msg/HighLevelCommand.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "rbq_msgs/msg/detail/high_level_command__struct.h"
#include "rbq_msgs/msg/detail/high_level_command__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rbq_msgs__msg__high_level_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("rbq_msgs.msg._high_level_command.HighLevelCommand", full_classname_dest, 49) == 0);
  }
  rbq_msgs__msg__HighLevelCommand * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // identifier
    PyObject * field = PyObject_GetAttrString(_pymsg, "identifier");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->identifier, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // omega_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "omega_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->omega_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_body_h
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_body_h");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_body_h = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // delta_foot_h
    PyObject * field = PyObject_GetAttrString(_pymsg, "delta_foot_h");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->delta_foot_h = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gait_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "gait_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gait_state = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gait_transition
    PyObject * field = PyObject_GetAttrString(_pymsg, "gait_transition");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gait_transition = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rbq_msgs__msg__high_level_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HighLevelCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rbq_msgs.msg._high_level_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HighLevelCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rbq_msgs__msg__HighLevelCommand * ros_message = (rbq_msgs__msg__HighLevelCommand *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // identifier
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->identifier.data,
      strlen(ros_message->identifier.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "identifier", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // omega_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->omega_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "omega_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_body_h
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_body_h);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_body_h", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // delta_foot_h
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->delta_foot_h);
    {
      int rc = PyObject_SetAttrString(_pymessage, "delta_foot_h", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gait_state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gait_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gait_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gait_transition
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gait_transition ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gait_transition", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
