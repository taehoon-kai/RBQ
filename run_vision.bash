#!/bin/bash
export CYCLONEDDS_URI=file://$PWD/configs/cyclonedds_ros2.xml
export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
source /opt/ros/humble/setup.bash
source ros2/install/setup.bash

python3 vision_qr_node.py
