import time

import logging
import rclpy
from .absract_dc_motor import AbstractDcMotor
import sys


class MockDcMotors(AbstractDcMotor):

    def __init__(self, name: str):
        super().__init__(name)
        self.logger = logging.getLogger(name + "_logger")
        root = logging.getLogger()
        root.setLevel(logging.INFO)
        handler = logging.StreamHandler(sys.stdout)
        root.addHandler(handler)

    def forward(self):
        while self.thread_running and self.current_action == "forward":
            self.logger.info(msg="forward")
            time.sleep(1)

    def right(self):
        while self.thread_running and self.current_action == "right":
            self.logger.info(msg="right")
            time.sleep(1)

    def left(self):
        while self.thread_running and self.current_action == "left":
            self.logger.info(msg="left")
            time.sleep(1)

    def backup(self):
        while self.thread_running and self.current_action == "backup":
            self.logger.info(msg="backup")
            time.sleep(1)

    def turnaround(self):
        self.logger.info(msg="turnaround")

    def stop(self):
        self.logger.info(msg="stop")

def main(args=None):
    rclpy.init(args=args)
    node = MockDcMotors("mock_dc_motors")
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()