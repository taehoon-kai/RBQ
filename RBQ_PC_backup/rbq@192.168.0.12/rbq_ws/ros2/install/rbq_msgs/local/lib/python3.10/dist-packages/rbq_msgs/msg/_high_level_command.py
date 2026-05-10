# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rbq_msgs:msg/HighLevelCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HighLevelCommand(type):
    """Metaclass of message 'HighLevelCommand'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATE_FALL': -2,
        'STATE_OFF': -1,
        'STATE_SIT': 0,
        'STATE_STAND': 1,
        'STATE_AIM': 2,
        'STATE_WALK': 3,
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
                'rbq_msgs.msg.HighLevelCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__high_level_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__high_level_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__high_level_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__high_level_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__high_level_command

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATE_FALL': cls.__constants['STATE_FALL'],
            'STATE_OFF': cls.__constants['STATE_OFF'],
            'STATE_SIT': cls.__constants['STATE_SIT'],
            'STATE_STAND': cls.__constants['STATE_STAND'],
            'STATE_AIM': cls.__constants['STATE_AIM'],
            'STATE_WALK': cls.__constants['STATE_WALK'],
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
    def STATE_FALL(self):
        """Message constant 'STATE_FALL'."""
        return Metaclass_HighLevelCommand.__constants['STATE_FALL']

    @property
    def STATE_OFF(self):
        """Message constant 'STATE_OFF'."""
        return Metaclass_HighLevelCommand.__constants['STATE_OFF']

    @property
    def STATE_SIT(self):
        """Message constant 'STATE_SIT'."""
        return Metaclass_HighLevelCommand.__constants['STATE_SIT']

    @property
    def STATE_STAND(self):
        """Message constant 'STATE_STAND'."""
        return Metaclass_HighLevelCommand.__constants['STATE_STAND']

    @property
    def STATE_AIM(self):
        """Message constant 'STATE_AIM'."""
        return Metaclass_HighLevelCommand.__constants['STATE_AIM']

    @property
    def STATE_WALK(self):
        """Message constant 'STATE_WALK'."""
        return Metaclass_HighLevelCommand.__constants['STATE_WALK']

    @property
    def STATE_STAIRS(self):
        """Message constant 'STATE_STAIRS'."""
        return Metaclass_HighLevelCommand.__constants['STATE_STAIRS']

    @property
    def STATE_WAVE(self):
        """Message constant 'STATE_WAVE'."""
        return Metaclass_HighLevelCommand.__constants['STATE_WAVE']

    @property
    def STATE_RUN(self):
        """Message constant 'STATE_RUN'."""
        return Metaclass_HighLevelCommand.__constants['STATE_RUN']

    @property
    def STATE_RL_TROT(self):
        """Message constant 'STATE_RL_TROT'."""
        return Metaclass_HighLevelCommand.__constants['STATE_RL_TROT']

    @property
    def STATE_RL_FRONT_WALK(self):
        """Message constant 'STATE_RL_FRONT_WALK'."""
        return Metaclass_HighLevelCommand.__constants['STATE_RL_FRONT_WALK']

    @property
    def STATE_RL_LEFT_WALK(self):
        """Message constant 'STATE_RL_LEFT_WALK'."""
        return Metaclass_HighLevelCommand.__constants['STATE_RL_LEFT_WALK']

    @property
    def STATE_RL_RIGHT_WALK(self):
        """Message constant 'STATE_RL_RIGHT_WALK'."""
        return Metaclass_HighLevelCommand.__constants['STATE_RL_RIGHT_WALK']

    @property
    def STATE_RL_BOUND(self):
        """Message constant 'STATE_RL_BOUND'."""
        return Metaclass_HighLevelCommand.__constants['STATE_RL_BOUND']

    @property
    def STATE_RL_PACE(self):
        """Message constant 'STATE_RL_PACE'."""
        return Metaclass_HighLevelCommand.__constants['STATE_RL_PACE']

    @property
    def STATE_RL_PRONK(self):
        """Message constant 'STATE_RL_PRONK'."""
        return Metaclass_HighLevelCommand.__constants['STATE_RL_PRONK']

    @property
    def STATE_RL_3LEG_HR(self):
        """Message constant 'STATE_RL_3LEG_HR'."""
        return Metaclass_HighLevelCommand.__constants['STATE_RL_3LEG_HR']

    @property
    def STATE_RL_3LEG_HL(self):
        """Message constant 'STATE_RL_3LEG_HL'."""
        return Metaclass_HighLevelCommand.__constants['STATE_RL_3LEG_HL']

    @property
    def STATE_RL_3LEG_FR(self):
        """Message constant 'STATE_RL_3LEG_FR'."""
        return Metaclass_HighLevelCommand.__constants['STATE_RL_3LEG_FR']

    @property
    def STATE_RL_3LEG_FL(self):
        """Message constant 'STATE_RL_3LEG_FL'."""
        return Metaclass_HighLevelCommand.__constants['STATE_RL_3LEG_FL']

    @property
    def STATE_RL_TROT_VISION(self):
        """Message constant 'STATE_RL_TROT_VISION'."""
        return Metaclass_HighLevelCommand.__constants['STATE_RL_TROT_VISION']

    @property
    def STATE_RL_TROT_RUN(self):
        """Message constant 'STATE_RL_TROT_RUN'."""
        return Metaclass_HighLevelCommand.__constants['STATE_RL_TROT_RUN']

    @property
    def STATE_RL_SILENT(self):
        """Message constant 'STATE_RL_SILENT'."""
        return Metaclass_HighLevelCommand.__constants['STATE_RL_SILENT']


class HighLevelCommand(metaclass=Metaclass_HighLevelCommand):
    """
    Message class 'HighLevelCommand'.

    Constants:
      STATE_FALL
      STATE_OFF
      STATE_SIT
      STATE_STAND
      STATE_AIM
      STATE_WALK
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
        '_identifier',
        '_roll',
        '_pitch',
        '_yaw',
        '_vel_x',
        '_vel_y',
        '_omega_z',
        '_delta_body_h',
        '_delta_foot_h',
        '_gait_state',
        '_gait_transition',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'identifier': 'string',
        'roll': 'double',
        'pitch': 'double',
        'yaw': 'double',
        'vel_x': 'double',
        'vel_y': 'double',
        'omega_z': 'double',
        'delta_body_h': 'double',
        'delta_foot_h': 'double',
        'gait_state': 'int8',
        'gait_transition': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.identifier = kwargs.get('identifier', str())
        self.roll = kwargs.get('roll', float())
        self.pitch = kwargs.get('pitch', float())
        self.yaw = kwargs.get('yaw', float())
        self.vel_x = kwargs.get('vel_x', float())
        self.vel_y = kwargs.get('vel_y', float())
        self.omega_z = kwargs.get('omega_z', float())
        self.delta_body_h = kwargs.get('delta_body_h', float())
        self.delta_foot_h = kwargs.get('delta_foot_h', float())
        self.gait_state = kwargs.get('gait_state', int())
        self.gait_transition = kwargs.get('gait_transition', bool())

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
        if self.identifier != other.identifier:
            return False
        if self.roll != other.roll:
            return False
        if self.pitch != other.pitch:
            return False
        if self.yaw != other.yaw:
            return False
        if self.vel_x != other.vel_x:
            return False
        if self.vel_y != other.vel_y:
            return False
        if self.omega_z != other.omega_z:
            return False
        if self.delta_body_h != other.delta_body_h:
            return False
        if self.delta_foot_h != other.delta_foot_h:
            return False
        if self.gait_state != other.gait_state:
            return False
        if self.gait_transition != other.gait_transition:
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
    def identifier(self):
        """Message field 'identifier'."""
        return self._identifier

    @identifier.setter
    def identifier(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'identifier' field must be of type 'str'"
        self._identifier = value

    @builtins.property
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'roll' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._roll = value

    @builtins.property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pitch' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pitch = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw = value

    @builtins.property
    def vel_x(self):
        """Message field 'vel_x'."""
        return self._vel_x

    @vel_x.setter
    def vel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vel_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vel_x = value

    @builtins.property
    def vel_y(self):
        """Message field 'vel_y'."""
        return self._vel_y

    @vel_y.setter
    def vel_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vel_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vel_y = value

    @builtins.property
    def omega_z(self):
        """Message field 'omega_z'."""
        return self._omega_z

    @omega_z.setter
    def omega_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'omega_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'omega_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._omega_z = value

    @builtins.property
    def delta_body_h(self):
        """Message field 'delta_body_h'."""
        return self._delta_body_h

    @delta_body_h.setter
    def delta_body_h(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_body_h' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'delta_body_h' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._delta_body_h = value

    @builtins.property
    def delta_foot_h(self):
        """Message field 'delta_foot_h'."""
        return self._delta_foot_h

    @delta_foot_h.setter
    def delta_foot_h(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_foot_h' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'delta_foot_h' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._delta_foot_h = value

    @builtins.property
    def gait_state(self):
        """Message field 'gait_state'."""
        return self._gait_state

    @gait_state.setter
    def gait_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gait_state' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'gait_state' field must be an integer in [-128, 127]"
        self._gait_state = value

    @builtins.property
    def gait_transition(self):
        """Message field 'gait_transition'."""
        return self._gait_transition

    @gait_transition.setter
    def gait_transition(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gait_transition' field must be of type 'bool'"
        self._gait_transition = value
