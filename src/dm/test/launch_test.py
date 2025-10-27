
import os
import unittest

import launch
import launch.actions
import launch_ros.actions
import launch_testing.actions
import launch_testing.markers
import pytest
from rcl_interfaces.srv import SetParameters
import rclpy
from rclpy.node import Node

@pytest.mark.launch_test
@launch_testing.markers.keep_alive
def generate_test_description():
    return launch.LaunchDescription([
        launch_ros.actions.Node(
            executable='mock_dc_motors',
            package='dm',
            name='launch_tomauto_tests',
            output='screen',
        ),
        launch.actions.TimerAction(
            period=0.5, actions=[launch_testing.actions.ReadyToTest()]),
    ])


@pytest.mark.linter
class TestFixture(unittest.TestCase):

    @classmethod
    def setUp(self):
        rclpy.init()

    @classmethod
    def tearDown(self):
        rclpy.shutdown()

    def test_sayhi(self):
        print("zzzzhi!!!!!")
