import subprocess
import unittest
from time import sleep

import pytest

import launch
import launch_ros
import launch_testing
import rclpy
from tomauto_interfaces.msg import DriveCommand
from rclpy.node import Node


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


    def test_logs_spawning(self,proc_output):
        print("HI")
        node = Node("pub")
        dc_motor_publisher_ = node.create_publisher(DriveCommand, "dc_motor_sub", 10)
        #
        drive_command = DriveCommand()
        drive_command.direction = "forward"
        dc_motor_publisher_.publish(drive_command)
        proc_output.assertWaitFor(
            'dcm:forward',
            timeout=30, stream='stdout')


