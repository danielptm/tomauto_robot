import subprocess
import unittest
from time import sleep

import pytest

import launch
import launch_ros
import launch_testing
import rclpy


@pytest.mark.launch_test
def generate_test_description():
    return launch.LaunchDescription([
        launch_ros.actions.Node(
            executable='mock_dc_motors',
            package='dm',
            name='mock_dc_motors',
            output='screen',
        ),
        launch_ros.actions.Node(
            executable='controller',
            package='controller',
            name='controller',
            output='screen',
        ),
        launch.actions.TimerAction(
            period=0.5, actions=[launch_testing.actions.ReadyToTest()]),
    ])


class TestFixture(unittest.TestCase):

    def setUp(self):
        rclpy.init()

    def tearDown(self):
        rclpy.shutdown()

    def test_sayhi2(self):
        ros2_command = ["ros2", "topic", "pub", "--once", "/drive_camera_sub", "tomauto_interfaces/msg/DriveCamera", "detected_object: 'forward_arrow'"]
        subprocess.run(ros2_command, shell=False)

    def test_logs_spawning(self, proc_output):
        """Check whether logging properly"""
        proc_output.assertWaitFor(
            '[mock_dc_motors-1] dcm:forward',
            timeout=10, stream='stdout')