# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rbq_msgs:msg/RobotStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotStatus(type):
    """Metaclass of message 'RobotStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DOCKING_MAX_FAIL_CNT_REACHED': -6,
        'DOCKING_MARKER_POS_INVALID_ROTATION': -5,
        'DOCKING_MARKER_POS_INVALID_TOO_FAR': -4,
        'DOCKING_MARKER_POS_INVALID_WRONG_DIR': -3,
        'DOCKING_MARKER_NOT_FOUND': -2,
        'DOCKING_FAILED': -1,
        'DOCKING_OPERATION_MODE': 0,
        'DOCKING_APPROACH_OFFSET': 1,
        'DOCKING_APPROACH': 2,
        'DOCKING_APPROACH_WIDE': 3,
        'DOCKING_SIT_DOWN': 4,
        'DOCKING_SUCCESS': 5,
        'DOCKING_SUCCESS_CHARGING': 6,
        'DOCKING_SUCCESS_NO_CHARGING': 7,
        'STATE_FALL': -2,
        'STATE_OFF': -1,
        'STATE_SIT': 0,
        'STATE_STAND': 1,
        'STATE_WALK': 2,
        'STATE_AIM': 3,
        'STATE_STAIRS': 4,
        'STATE_WAVE': 5,
        'STATE_RUN': 6,
        'STATE_RL_TROT': 30,
        'STATE_RL_FRONT_WALK': 31,
        'STATE_RL_LEFT_WALK': 33,
        'STATE_RL_RIGHT_WALK': 34,
        'STATE_RL_BOUND': 35,
        'STATE_RL_PACE': 36,
        'STATE_RL_PRONK': 37,
        'STATE_RL_3LEG_HR': 38,
        'STATE_RL_3LEG_HL': 39,
        'STATE_RL_3LEG_FR': 40,
        'STATE_RL_3LEG_FL': 41,
        'STATE_RL_TROT_VISION': 42,
        'STATE_RL_TROT_RUN': 45,
        'STATE_RL_SILENT': 46,
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
                'rbq_msgs.msg.RobotStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DOCKING_MAX_FAIL_CNT_REACHED': cls.__constants['DOCKING_MAX_FAIL_CNT_REACHED'],
            'DOCKING_MARKER_POS_INVALID_ROTATION': cls.__constants['DOCKING_MARKER_POS_INVALID_ROTATION'],
            'DOCKING_MARKER_POS_INVALID_TOO_FAR': cls.__constants['DOCKING_MARKER_POS_INVALID_TOO_FAR'],
            'DOCKING_MARKER_POS_INVALID_WRONG_DIR': cls.__constants['DOCKING_MARKER_POS_INVALID_WRONG_DIR'],
            'DOCKING_MARKER_NOT_FOUND': cls.__constants['DOCKING_MARKER_NOT_FOUND'],
            'DOCKING_FAILED': cls.__constants['DOCKING_FAILED'],
            'DOCKING_OPERATION_MODE': cls.__constants['DOCKING_OPERATION_MODE'],
            'DOCKING_APPROACH_OFFSET': cls.__constants['DOCKING_APPROACH_OFFSET'],
            'DOCKING_APPROACH': cls.__constants['DOCKING_APPROACH'],
            'DOCKING_APPROACH_WIDE': cls.__constants['DOCKING_APPROACH_WIDE'],
            'DOCKING_SIT_DOWN': cls.__constants['DOCKING_SIT_DOWN'],
            'DOCKING_SUCCESS': cls.__constants['DOCKING_SUCCESS'],
            'DOCKING_SUCCESS_CHARGING': cls.__constants['DOCKING_SUCCESS_CHARGING'],
            'DOCKING_SUCCESS_NO_CHARGING': cls.__constants['DOCKING_SUCCESS_NO_CHARGING'],
            'STATE_FALL': cls.__constants['STATE_FALL'],
            'STATE_OFF': cls.__constants['STATE_OFF'],
            'STATE_SIT': cls.__constants['STATE_SIT'],
            'STATE_STAND': cls.__constants['STATE_STAND'],
            'STATE_WALK': cls.__constants['STATE_WALK'],
            'STATE_AIM': cls.__constants['STATE_AIM'],
            'STATE_STAIRS': cls.__constants['STATE_STAIRS'],
            'STATE_WAVE': cls.__constants['STATE_WAVE'],
            'STATE_RUN': cls.__constants['STATE_RUN'],
            'STATE_RL_TROT': cls.__constants['STATE_RL_TROT'],
            'STATE_RL_FRONT_WALK': cls.__constants['STATE_RL_FRONT_WALK'],
            'STATE_RL_LEFT_WALK': cls.__constants['STATE_RL_LEFT_WALK'],
            'STATE_RL_RIGHT_WALK': cls.__constants['STATE_RL_RIGHT_WALK'],
            'STATE_RL_BOUND': cls.__constants['STATE_RL_BOUND'],
            'STATE_RL_PACE': cls.__constants['STATE_RL_PACE'],
            'STATE_RL_PRONK': cls.__constants['STATE_RL_PRONK'],
            'STATE_RL_3LEG_HR': cls.__constants['STATE_RL_3LEG_HR'],
            'STATE_RL_3LEG_HL': cls.__constants['STATE_RL_3LEG_HL'],
            'STATE_RL_3LEG_FR': cls.__constants['STATE_RL_3LEG_FR'],
            'STATE_RL_3LEG_FL': cls.__constants['STATE_RL_3LEG_FL'],
            'STATE_RL_TROT_VISION': cls.__constants['STATE_RL_TROT_VISION'],
            'STATE_RL_TROT_RUN': cls.__constants['STATE_RL_TROT_RUN'],
            'STATE_RL_SILENT': cls.__constants['STATE_RL_SILENT'],
        }

    @property
    def DOCKING_MAX_FAIL_CNT_REACHED(self):
        """Message constant 'DOCKING_MAX_FAIL_CNT_REACHED'."""
        return Metaclass_RobotStatus.__constants['DOCKING_MAX_FAIL_CNT_REACHED']

    @property
    def DOCKING_MARKER_POS_INVALID_ROTATION(self):
        """Message constant 'DOCKING_MARKER_POS_INVALID_ROTATION'."""
        return Metaclass_RobotStatus.__constants['DOCKING_MARKER_POS_INVALID_ROTATION']

    @property
    def DOCKING_MARKER_POS_INVALID_TOO_FAR(self):
        """Message constant 'DOCKING_MARKER_POS_INVALID_TOO_FAR'."""
        return Metaclass_RobotStatus.__constants['DOCKING_MARKER_POS_INVALID_TOO_FAR']

    @property
    def DOCKING_MARKER_POS_INVALID_WRONG_DIR(self):
        """Message constant 'DOCKING_MARKER_POS_INVALID_WRONG_DIR'."""
        return Metaclass_RobotStatus.__constants['DOCKING_MARKER_POS_INVALID_WRONG_DIR']

    @property
    def DOCKING_MARKER_NOT_FOUND(self):
        """Message constant 'DOCKING_MARKER_NOT_FOUND'."""
        return Metaclass_RobotStatus.__constants['DOCKING_MARKER_NOT_FOUND']

    @property
    def DOCKING_FAILED(self):
        """Message constant 'DOCKING_FAILED'."""
        return Metaclass_RobotStatus.__constants['DOCKING_FAILED']

    @property
    def DOCKING_OPERATION_MODE(self):
        """Message constant 'DOCKING_OPERATION_MODE'."""
        return Metaclass_RobotStatus.__constants['DOCKING_OPERATION_MODE']

    @property
    def DOCKING_APPROACH_OFFSET(self):
        """Message constant 'DOCKING_APPROACH_OFFSET'."""
        return Metaclass_RobotStatus.__constants['DOCKING_APPROACH_OFFSET']

    @property
    def DOCKING_APPROACH(self):
        """Message constant 'DOCKING_APPROACH'."""
        return Metaclass_RobotStatus.__constants['DOCKING_APPROACH']

    @property
    def DOCKING_APPROACH_WIDE(self):
        """Message constant 'DOCKING_APPROACH_WIDE'."""
        return Metaclass_RobotStatus.__constants['DOCKING_APPROACH_WIDE']

    @property
    def DOCKING_SIT_DOWN(self):
        """Message constant 'DOCKING_SIT_DOWN'."""
        return Metaclass_RobotStatus.__constants['DOCKING_SIT_DOWN']

    @property
    def DOCKING_SUCCESS(self):
        """Message constant 'DOCKING_SUCCESS'."""
        return Metaclass_RobotStatus.__constants['DOCKING_SUCCESS']

    @property
    def DOCKING_SUCCESS_CHARGING(self):
        """Message constant 'DOCKING_SUCCESS_CHARGING'."""
        return Metaclass_RobotStatus.__constants['DOCKING_SUCCESS_CHARGING']

    @property
    def DOCKING_SUCCESS_NO_CHARGING(self):
        """Message constant 'DOCKING_SUCCESS_NO_CHARGING'."""
        return Metaclass_RobotStatus.__constants['DOCKING_SUCCESS_NO_CHARGING']

    @property
    def STATE_FALL(self):
        """Message constant 'STATE_FALL'."""
        return Metaclass_RobotStatus.__constants['STATE_FALL']

    @property
    def STATE_OFF(self):
        """Message constant 'STATE_OFF'."""
        return Metaclass_RobotStatus.__constants['STATE_OFF']

    @property
    def STATE_SIT(self):
        """Message constant 'STATE_SIT'."""
        return Metaclass_RobotStatus.__constants['STATE_SIT']

    @property
    def STATE_STAND(self):
        """Message constant 'STATE_STAND'."""
        return Metaclass_RobotStatus.__constants['STATE_STAND']

    @property
    def STATE_WALK(self):
        """Message constant 'STATE_WALK'."""
        return Metaclass_RobotStatus.__constants['STATE_WALK']

    @property
    def STATE_AIM(self):
        """Message constant 'STATE_AIM'."""
        return Metaclass_RobotStatus.__constants['STATE_AIM']

    @property
    def STATE_STAIRS(self):
        """Message constant 'STATE_STAIRS'."""
        return Metaclass_RobotStatus.__constants['STATE_STAIRS']

    @property
    def STATE_WAVE(self):
        """Message constant 'STATE_WAVE'."""
        return Metaclass_RobotStatus.__constants['STATE_WAVE']

    @property
    def STATE_RUN(self):
        """Message constant 'STATE_RUN'."""
        return Metaclass_RobotStatus.__constants['STATE_RUN']

    @property
    def STATE_RL_TROT(self):
        """Message constant 'STATE_RL_TROT'."""
        return Metaclass_RobotStatus.__constants['STATE_RL_TROT']

    @property
    def STATE_RL_FRONT_WALK(self):
        """Message constant 'STATE_RL_FRONT_WALK'."""
        return Metaclass_RobotStatus.__constants['STATE_RL_FRONT_WALK']

    @property
    def STATE_RL_LEFT_WALK(self):
        """Message constant 'STATE_RL_LEFT_WALK'."""
        return Metaclass_RobotStatus.__constants['STATE_RL_LEFT_WALK']

    @property
    def STATE_RL_RIGHT_WALK(self):
        """Message constant 'STATE_RL_RIGHT_WALK'."""
        return Metaclass_RobotStatus.__constants['STATE_RL_RIGHT_WALK']

    @property
    def STATE_RL_BOUND(self):
        """Message constant 'STATE_RL_BOUND'."""
        return Metaclass_RobotStatus.__constants['STATE_RL_BOUND']

    @property
    def STATE_RL_PACE(self):
        """Message constant 'STATE_RL_PACE'."""
        return Metaclass_RobotStatus.__constants['STATE_RL_PACE']

    @property
    def STATE_RL_PRONK(self):
        """Message constant 'STATE_RL_PRONK'."""
        return Metaclass_RobotStatus.__constants['STATE_RL_PRONK']

    @property
    def STATE_RL_3LEG_HR(self):
        """Message constant 'STATE_RL_3LEG_HR'."""
        return Metaclass_RobotStatus.__constants['STATE_RL_3LEG_HR']

    @property
    def STATE_RL_3LEG_HL(self):
        """Message constant 'STATE_RL_3LEG_HL'."""
        return Metaclass_RobotStatus.__constants['STATE_RL_3LEG_HL']

    @property
    def STATE_RL_3LEG_FR(self):
        """Message constant 'STATE_RL_3LEG_FR'."""
        return Metaclass_RobotStatus.__constants['STATE_RL_3LEG_FR']

    @property
    def STATE_RL_3LEG_FL(self):
        """Message constant 'STATE_RL_3LEG_FL'."""
        return Metaclass_RobotStatus.__constants['STATE_RL_3LEG_FL']

    @property
    def STATE_RL_TROT_VISION(self):
        """Message constant 'STATE_RL_TROT_VISION'."""
        return Metaclass_RobotStatus.__constants['STATE_RL_TROT_VISION']

    @property
    def STATE_RL_TROT_RUN(self):
        """Message constant 'STATE_RL_TROT_RUN'."""
        return Metaclass_RobotStatus.__constants['STATE_RL_TROT_RUN']

    @property
    def STATE_RL_SILENT(self):
        """Message constant 'STATE_RL_SILENT'."""
        return Metaclass_RobotStatus.__constants['STATE_RL_SILENT']


class RobotStatus(metaclass=Metaclass_RobotStatus):
    """
    Message class 'RobotStatus'.

    Constants:
      DOCKING_MAX_FAIL_CNT_REACHED
      DOCKING_MARKER_POS_INVALID_ROTATION
      DOCKING_MARKER_POS_INVALID_TOO_FAR
      DOCKING_MARKER_POS_INVALID_WRONG_DIR
      DOCKING_MARKER_NOT_FOUND
      DOCKING_FAILED
      DOCKING_OPERATION_MODE
      DOCKING_APPROACH_OFFSET
      DOCKING_APPROACH
      DOCKING_APPROACH_WIDE
      DOCKING_SIT_DOWN
      DOCKING_SUCCESS
      DOCKING_SUCCESS_CHARGING
      DOCKING_SUCCESS_NO_CHARGING
      STATE_FALL
      STATE_OFF
      STATE_SIT
      STATE_STAND
      STATE_WALK
      STATE_AIM
      STATE_STAIRS
      STATE_WAVE
      STATE_RUN
      STATE_RL_TROT
      STATE_RL_FRONT_WALK
      STATE_RL_LEFT_WALK
      STATE_RL_RIGHT_WALK
      STATE_RL_BOUND
      STATE_RL_PACE
      STATE_RL_PRONK
      STATE_RL_3LEG_HR
      STATE_RL_3LEG_HL
      STATE_RL_3LEG_FR
      STATE_RL_3LEG_FL
      STATE_RL_TROT_VISION
      STATE_RL_TROT_RUN
      STATE_RL_SILENT
    """

    __slots__ = [
        '_header',
        '_con_start',
        '_ready_pos',
        '_ground_pos',
        '_force_con',
        '_ext_joy',
        '_is_standing',
        '_can_check',
        '_find_home',
        '_gait_id',
        '_is_fall',
        '_docking_state',
        '_imu_success',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'con_start': 'boolean',
        'ready_pos': 'boolean',
        'ground_pos': 'boolean',
        'force_con': 'boolean',
        'ext_joy': 'boolean',
        'is_standing': 'boolean',
        'can_check': 'boolean',
        'find_home': 'boolean',
        'gait_id': 'int8',
        'is_fall': 'boolean',
        'docking_state': 'int8',
        'imu_success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.con_start = kwargs.get('con_start', bool())
        self.ready_pos = kwargs.get('ready_pos', bool())
        self.ground_pos = kwargs.get('ground_pos', bool())
        self.force_con = kwargs.get('force_con', bool())
        self.ext_joy = kwargs.get('ext_joy', bool())
        self.is_standing = kwargs.get('is_standing', bool())
        self.can_check = kwargs.get('can_check', bool())
        self.find_home = kwargs.get('find_home', bool())
        self.gait_id = kwargs.get('gait_id', int())
        self.is_fall = kwargs.get('is_fall', bool())
        self.docking_state = kwargs.get('docking_state', int())
        self.imu_success = kwargs.get('imu_success', bool())

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
        if self.con_start != other.con_start:
            return False
        if self.ready_pos != other.ready_pos:
            return False
        if self.ground_pos != other.ground_pos:
            return False
        if self.force_con != other.force_con:
            return False
        if self.ext_joy != other.ext_joy:
            return False
        if self.is_standing != other.is_standing:
            return False
        if self.can_check != other.can_check:
            return False
        if self.find_home != other.find_home:
            return False
        if self.gait_id != other.gait_id:
            return False
        if self.is_fall != other.is_fall:
            return False
        if self.docking_state != other.docking_state:
            return False
        if self.imu_success != other.imu_success:
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
    def con_start(self):
        """Message field 'con_start'."""
        return self._con_start

    @con_start.setter
    def con_start(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'con_start' field must be of type 'bool'"
        self._con_start = value

    @builtins.property
    def ready_pos(self):
        """Message field 'ready_pos'."""
        return self._ready_pos

    @ready_pos.setter
    def ready_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ready_pos' field must be of type 'bool'"
        self._ready_pos = value

    @builtins.property
    def ground_pos(self):
        """Message field 'ground_pos'."""
        return self._ground_pos

    @ground_pos.setter
    def ground_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ground_pos' field must be of type 'bool'"
        self._ground_pos = value

    @builtins.property
    def force_con(self):
        """Message field 'force_con'."""
        return self._force_con

    @force_con.setter
    def force_con(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'force_con' field must be of type 'bool'"
        self._force_con = value

    @builtins.property
    def ext_joy(self):
        """Message field 'ext_joy'."""
        return self._ext_joy

    @ext_joy.setter
    def ext_joy(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ext_joy' field must be of type 'bool'"
        self._ext_joy = value

    @builtins.property
    def is_standing(self):
        """Message field 'is_standing'."""
        return self._is_standing

    @is_standing.setter
    def is_standing(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_standing' field must be of type 'bool'"
        self._is_standing = value

    @builtins.property
    def can_check(self):
        """Message field 'can_check'."""
        return self._can_check

    @can_check.setter
    def can_check(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_check' field must be of type 'bool'"
        self._can_check = value

    @builtins.property
    def find_home(self):
        """Message field 'find_home'."""
        return self._find_home

    @find_home.setter
    def find_home(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'find_home' field must be of type 'bool'"
        self._find_home = value

    @builtins.property
    def gait_id(self):
        """Message field 'gait_id'."""
        return self._gait_id

    @gait_id.setter
    def gait_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gait_id' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'gait_id' field must be an integer in [-128, 127]"
        self._gait_id = value

    @builtins.property
    def is_fall(self):
        """Message field 'is_fall'."""
        return self._is_fall

    @is_fall.setter
    def is_fall(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_fall' field must be of type 'bool'"
        self._is_fall = value

    @builtins.property
    def docking_state(self):
        """Message field 'docking_state'."""
        return self._docking_state

    @docking_state.setter
    def docking_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'docking_state' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'docking_state' field must be an integer in [-128, 127]"
        self._docking_state = value

    @builtins.property
    def imu_success(self):
        """Message field 'imu_success'."""
        return self._imu_success

    @imu_success.setter
    def imu_success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'imu_success' field must be of type 'bool'"
        self._imu_success = value
