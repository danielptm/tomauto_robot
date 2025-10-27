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
            name='launch_tomauto_tests',
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
        sleep(600000)
        self.assertEqual(True, True)
