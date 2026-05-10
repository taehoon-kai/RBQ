# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rbq_msgs:msg/JointStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'temperature'
# Member 'motor_temp'
# Member 'position_ref'
# Member 'position_enc'
# Member 'velocity'
# Member 'torque_ref'
# Member 'current'
# Member 'kp'
# Member 'kd'
# Member 'owner'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JointStatus(type):
    """Metaclass of message 'JointStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rbq_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rbq_msgs.msg.JointStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__joint_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__joint_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__joint_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__joint_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__joint_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JointStatus(metaclass=Metaclass_JointStatus):
    """Message class 'JointStatus'."""

    __slots__ = [
        '_header',
        '_connected',
        '_temperature',
        '_motor_temp',
        '_status_fet',
        '_status_run',
        '_status_init',
        '_status_mod',
        '_status_non_ctr',
        '_status_bat',
        '_status_calib',
        '_status_mt_err',
        '_status_jam',
        '_status_cur',
        '_status_big',
        '_status_inp',
        '_status_flt',
        '_status_tmp',
        '_status_ps1',
        '_status_ps2',
        '_status_rsvd',
        '_position_ref',
        '_position_enc',
        '_velocity',
        '_torque_ref',
        '_current',
        '_kp',
        '_kd',
        '_owner',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'connected': 'sequence<boolean>',
        'temperature': 'sequence<int8>',
        'motor_temp': 'sequence<int8>',
        'status_fet': 'sequence<boolean>',
        'status_run': 'sequence<boolean>',
        'status_init': 'sequence<boolean>',
        'status_mod': 'sequence<boolean>',
        'status_non_ctr': 'sequence<boolean>',
        'status_bat': 'sequence<boolean>',
        'status_calib': 'sequence<boolean>',
        'status_mt_err': 'sequence<boolean>',
        'status_jam': 'sequence<boolean>',
        'status_cur': 'sequence<boolean>',
        'status_big': 'sequence<boolean>',
        'status_inp': 'sequence<boolean>',
        'status_flt': 'sequence<boolean>',
        'status_tmp': 'sequence<boolean>',
        'status_ps1': 'sequence<boolean>',
        'status_ps2': 'sequence<boolean>',
        'status_rsvd': 'sequence<boolean>',
        'position_ref': 'sequence<float>',
        'position_enc': 'sequence<float>',
        'velocity': 'sequence<float>',
        'torque_ref': 'sequence<float>',
        'current': 'sequence<float>',
        'kp': 'sequence<float>',
        'kd': 'sequence<float>',
        'owner': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.connected = kwargs.get('connected', [])
        self.temperature = array.array('b', kwargs.get('temperature', []))
        self.motor_temp = array.array('b', kwargs.get('motor_temp', []))
        self.status_fet = kwargs.get('status_fet', [])
        self.status_run = kwargs.get('status_run', [])
        self.status_init = kwargs.get('status_init', [])
        self.status_mod = kwargs.get('status_mod', [])
        self.status_non_ctr = kwargs.get('status_non_ctr', [])
        self.status_bat = kwargs.get('status_bat', [])
        self.status_calib = kwargs.get('status_calib', [])
        self.status_mt_err = kwargs.get('status_mt_err', [])
        self.status_jam = kwargs.get('status_jam', [])
        self.status_cur = kwargs.get('status_cur', [])
        self.status_big = kwargs.get('status_big', [])
        self.status_inp = kwargs.get('status_inp', [])
        self.status_flt = kwargs.get('status_flt', [])
        self.status_tmp = kwargs.get('status_tmp', [])
        self.status_ps1 = kwargs.get('status_ps1', [])
        self.status_ps2 = kwargs.get('status_ps2', [])
        self.status_rsvd = kwargs.get('status_rsvd', [])
        self.position_ref = array.array('f', kwargs.get('position_ref', []))
        self.position_enc = array.array('f', kwargs.get('position_enc', []))
        self.velocity = array.array('f', kwargs.get('velocity', []))
        self.torque_ref = array.array('f', kwargs.get('torque_ref', []))
        self.current = array.array('f', kwargs.get('current', []))
        self.kp = array.array('f', kwargs.get('kp', []))
        self.kd = array.array('f', kwargs.get('kd', []))
        self.owner = array.array('i', kwargs.get('owner', []))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.connected != other.connected:
            return False
        if self.temperature != other.temperature:
            return False
        if self.motor_temp != other.motor_temp:
            return False
        if self.status_fet != other.status_fet:
            return False
        if self.status_run != other.status_run:
            return False
        if self.status_init != other.status_init:
            return False
        if self.status_mod != other.status_mod:
            return False
        if self.status_non_ctr != other.status_non_ctr:
            return False
        if self.status_bat != other.status_bat:
            return False
        if self.status_calib != other.status_calib:
            return False
        if self.status_mt_err != other.status_mt_err:
            return False
        if self.status_jam != other.status_jam:
            return False
        if self.status_cur != other.status_cur:
            return False
        if self.status_big != other.status_big:
            return False
        if self.status_inp != other.status_inp:
            return False
        if self.status_flt != other.status_flt:
            return False
        if self.status_tmp != other.status_tmp:
            return False
        if self.status_ps1 != other.status_ps1:
            return False
        if self.status_ps2 != other.status_ps2:
            return False
        if self.status_rsvd != other.status_rsvd:
            return False
        if self.position_ref != other.position_ref:
            return False
        if self.position_enc != other.position_enc:
            return False
        if self.velocity != other.velocity:
            return False
        if self.torque_ref != other.torque_ref:
            return False
        if self.current != other.current:
            return False
        if self.kp != other.kp:
            return False
        if self.kd != other.kd:
            return False
        if self.owner != other.owner:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def connected(self):
        """Message field 'connected'."""
        return self._connected

    @connected.setter
    def connected(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'connected' field must be a set or sequence and each value of type 'bool'"
        self._connected = value

    @builtins.property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'b', \
                "The 'temperature' array.array() must have the type code of 'b'"
            self._temperature = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -128 and val < 128 for val in value)), \
                "The 'temperature' field must be a set or sequence and each value of type 'int' and each integer in [-128, 127]"
        self._temperature = array.array('b', value)

    @builtins.property
    def motor_temp(self):
        """Message field 'motor_temp'."""
        return self._motor_temp

    @motor_temp.setter
    def motor_temp(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'b', \
                "The 'motor_temp' array.array() must have the type code of 'b'"
            self._motor_temp = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -128 and val < 128 for val in value)), \
                "The 'motor_temp' field must be a set or sequence and each value of type 'int' and each integer in [-128, 127]"
        self._motor_temp = array.array('b', value)

    @builtins.property
    def status_fet(self):
        """Message field 'status_fet'."""
        return self._status_fet

    @status_fet.setter
    def status_fet(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'status_fet' field must be a set or sequence and each value of type 'bool'"
        self._status_fet = value

    @builtins.property
    def status_run(self):
        """Message field 'status_run'."""
        return self._status_run

    @status_run.setter
    def status_run(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'status_run' field must be a set or sequence and each value of type 'bool'"
        self._status_run = value

    @builtins.property
    def status_init(self):
        """Message field 'status_init'."""
        return self._status_init

    @status_init.setter
    def status_init(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'status_init' field must be a set or sequence and each value of type 'bool'"
        self._status_init = value

    @builtins.property
    def status_mod(self):
        """Message field 'status_mod'."""
        return self._status_mod

    @status_mod.setter
    def status_mod(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'status_mod' field must be a set or sequence and each value of type 'bool'"
        self._status_mod = value

    @builtins.property
    def status_non_ctr(self):
        """Message field 'status_non_ctr'."""
        return self._status_non_ctr

    @status_non_ctr.setter
    def status_non_ctr(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'status_non_ctr' field must be a set or sequence and each value of type 'bool'"
        self._status_non_ctr = value

    @builtins.property
    def status_bat(self):
        """Message field 'status_bat'."""
        return self._status_bat

    @status_bat.setter
    def status_bat(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'status_bat' field must be a set or sequence and each value of type 'bool'"
        self._status_bat = value

    @builtins.property
    def status_calib(self):
        """Message field 'status_calib'."""
        return self._status_calib

    @status_calib.setter
    def status_calib(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'status_calib' field must be a set or sequence and each value of type 'bool'"
        self._status_calib = value

    @builtins.property
    def status_mt_err(self):
        """Message field 'status_mt_err'."""
        return self._status_mt_err

    @status_mt_err.setter
    def status_mt_err(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'status_mt_err' field must be a set or sequence and each value of type 'bool'"
        self._status_mt_err = value

    @builtins.property
    def status_jam(self):
        """Message field 'status_jam'."""
        return self._status_jam

    @status_jam.setter
    def status_jam(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'status_jam' field must be a set or sequence and each value of type 'bool'"
        self._status_jam = value

    @builtins.property
    def status_cur(self):
        """Message field 'status_cur'."""
        return self._status_cur

    @status_cur.setter
    def status_cur(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'status_cur' field must be a set or sequence and each value of type 'bool'"
        self._status_cur = value

    @builtins.property
    def status_big(self):
        """Message field 'status_big'."""
        return self._status_big

    @status_big.setter
    def status_big(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'status_big' field must be a set or sequence and each value of type 'bool'"
        self._status_big = value

    @builtins.property
    def status_inp(self):
        """Message field 'status_inp'."""
        return self._status_inp

    @status_inp.setter
    def status_inp(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'status_inp' field must be a set or sequence and each value of type 'bool'"
        self._status_inp = value

    @builtins.property
    def status_flt(self):
        """Message field 'status_flt'."""
        return self._status_flt

    @status_flt.setter
    def status_flt(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'status_flt' field must be a set or sequence and each value of type 'bool'"
        self._status_flt = value

    @builtins.property
    def status_tmp(self):
        """Message field 'status_tmp'."""
        return self._status_tmp

    @status_tmp.setter
    def status_tmp(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'status_tmp' field must be a set or sequence and each value of type 'bool'"
        self._status_tmp = value

    @builtins.property
    def status_ps1(self):
        """Message field 'status_ps1'."""
        return self._status_ps1

    @status_ps1.setter
    def status_ps1(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'status_ps1' field must be a set or sequence and each value of type 'bool'"
        self._status_ps1 = value

    @builtins.property
    def status_ps2(self):
        """Message field 'status_ps2'."""
        return self._status_ps2

    @status_ps2.setter
    def status_ps2(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'status_ps2' field must be a set or sequence and each value of type 'bool'"
        self._status_ps2 = value

    @builtins.property
    def status_rsvd(self):
        """Message field 'status_rsvd'."""
        return self._status_rsvd

    @status_rsvd.setter
    def status_rsvd(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'status_rsvd' field must be a set or sequence and each value of type 'bool'"
        self._status_rsvd = value

    @builtins.property
    def position_ref(self):
        """Message field 'position_ref'."""
        return self._position_ref

    @position_ref.setter
    def position_ref(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'position_ref' array.array() must have the type code of 'f'"
            self._position_ref = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'position_ref' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._position_ref = array.array('f', value)

    @builtins.property
    def position_enc(self):
        """Message field 'position_enc'."""
        return self._position_enc

    @position_enc.setter
    def position_enc(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'position_enc' array.array() must have the type code of 'f'"
            self._position_enc = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'position_enc' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._position_enc = array.array('f', value)

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'velocity' array.array() must have the type code of 'f'"
            self._velocity = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'velocity' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._velocity = array.array('f', value)

    @builtins.property
    def torque_ref(self):
        """Message field 'torque_ref'."""
        return self._torque_ref

    @torque_ref.setter
    def torque_ref(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'torque_ref' array.array() must have the type code of 'f'"
            self._torque_ref = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'torque_ref' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._torque_ref = array.array('f', value)

    @builtins.property
    def current(self):
        """Message field 'current'."""
        return self._current

    @current.setter
    def current(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'current' array.array() must have the type code of 'f'"
            self._current = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'current' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._current = array.array('f', value)

    @builtins.property
    def kp(self):
        """Message field 'kp'."""
        return self._kp

    @kp.setter
    def kp(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'kp' array.array() must have the type code of 'f'"
            self._kp = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'kp' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._kp = array.array('f', value)

    @builtins.property
    def kd(self):
        """Message field 'kd'."""
        return self._kd

    @kd.setter
    def kd(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'kd' array.array() must have the type code of 'f'"
            self._kd = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'kd' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._kd = array.array('f', value)

    @builtins.property
    def owner(self):
        """Message field 'owner'."""
        return self._owner

    @owner.setter
    def owner(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'owner' array.array() must have the type code of 'i'"
            self._owner = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'owner' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._owner = array.array('i', value)
