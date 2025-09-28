import time

import logging
import rclpy
from .absract_dc_motor import AbstractDcMotor


class MockDcMotors(AbstractDcMotor):

    def __init__(self, name: str):
        super().__init__(name)
        self.logger = logging.getLogger(name + "_logger")

    def forward(self):
        while self.current_action == "forward":
            self.logger.info("forward")
            print("forward")
            time.sleep(1)

    def right(self):
        self.logger.info("right")

    def left(self):
        self.logger.info("left")

    def backup(self):
        while self.current_action == "backup":
            self.logger.info("backup")
            time.sleep(1)

    def turnaround(self):
        self.logger.info("turnaround")

    def stop(self):
        while self.current_action is None or self.current_action == "stop":
            print("stop")
            time.sleep(1)

def main(args=None):
    rclpy.init(args=args)
    node = MockDcMotors("mock_dc_motors")
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()