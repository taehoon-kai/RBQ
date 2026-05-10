// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rbq_msgs:msg/RobotStatus.idl
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
#include "rbq_msgs/msg/detail/robot_status__struct.h"
#include "rbq_msgs/msg/detail/robot_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool rbq_msgs__msg__robot_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("rbq_msgs.msg._robot_status.RobotStatus", full_classname_dest, 38) == 0);
  }
  rbq_msgs__msg__RobotStatus * ros_message = _ros_message;
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
  {  // con_start
    PyObject * field = PyObject_GetAttrString(_pymsg, "con_start");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->con_start = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ready_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "ready_pos");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ready_pos = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ground_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "ground_pos");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ground_pos = (Py_True == field);
    Py_DECREF(field);
  }
  {  // force_con
    PyObject * field = PyObject_GetAttrString(_pymsg, "force_con");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->force_con = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ext_joy
    PyObject * field = PyObject_GetAttrString(_pymsg, "ext_joy");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ext_joy = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_standing
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_standing");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_standing = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_check
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_check");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_check = (Py_True == field);
    Py_DECREF(field);
  }
  {  // find_home
    PyObject * field = PyObject_GetAttrString(_pymsg, "find_home");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->find_home = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gait_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "gait_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gait_id = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // is_fall
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_fall");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_fall = (Py_True == field);
    Py_DECREF(field);
  }
  {  // docking_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "docking_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->docking_state = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // imu_success
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->imu_success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rbq_msgs__msg__robot_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rbq_msgs.msg._robot_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rbq_msgs__msg__RobotStatus * ros_message = (rbq_msgs__msg__RobotStatus *)raw_ros_message;
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
  {  // con_start
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->con_start ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "con_start", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ready_pos
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ready_pos ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ready_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ground_pos
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ground_pos ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ground_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // force_con
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->force_con ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "force_con", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ext_joy
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ext_joy ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ext_joy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_standing
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_standing ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_standing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_check
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_check ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_check", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // find_home
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->find_home ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "find_home", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gait_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gait_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gait_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_fall
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_fall ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_fall", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // docking_state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->docking_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "docking_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->imu_success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
