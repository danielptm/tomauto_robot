import time

import logging
import rclpy
from .absract_dc_motor import AbstractDcMotor
import sys
# from adafruit_motorkit import MotorKit


class MockDcMotors(AbstractDcMotor):

    def __init__(self, name: str):
        super().__init__(name)
        self.logger = logging.getLogger(name + "_logger")
        root = logging.getLogger()
        root.setLevel(logging.INFO)
        handler = logging.StreamHandler(sys.stdout)
        root.addHandler(handler)
        self.env = "test" # TODO: Fix this
        self.kit = None
        # if "test" in self.env:
        #     self.kit = MotorKit()

    def forward(self):
        self.logger.info(msg="dcm: start drive forward")
        while self.thread_running and self.current_action == "forward":
            if "test" in self.env:
                self.logger.info(msg="dcm:forward")
                time.sleep(1)
            else:
                self.kit.motor1.throttle = -1
                self.kit.motor2.throttle = -1
                self.kit.motor3.throttle = -1
                self.kit.motor4.throttle = -1

    def right(self):
        self.logger.info(msg="dcm: start turn right")
        while self.thread_running and self.current_action == "right":
            if "test" in self.env:
                self.logger.info(msg="dcm:right")
                time.sleep(1)
            else:
                self.kit.motor1.throttle = 0.65
                self.kit.motor2.throttle = -0.65
                self.kit.motor3.throttle = 0.65
                self.kit.motor2.throttle = -0.65

    def left(self):
        self.logger.info(msg="dcm: start turn left")
        while self.thread_running and self.current_action == "left":
            if "test" in self.env:
                self.logger.info(msg="dcm:left")
                time.sleep(1)
            else:
                self.kit.motor1.throttle = -0.65
                self.kit.motor2.throttle = 0.65
                self.kit.motor3.throttle = -0.65
                self.kit.motor4.throttle = 0.65

    def backup(self):
        self.logger.info(msg="dcm: start backup")
        while self.thread_running and self.current_action == "backup":
            if "test" in self.env:
                self.logger.info(msg="dcm:backup")
                time.sleep(1)
            else:
                self.kit.motor1.throttle = 0.65
                self.kit.motor2.throttle = 0.65
                self.kit.motor3.throttle = 0.65
                self.kit.motor4.throttle = 0.65


    def stop(self):
        if "test" in self.env:
            self.logger.info(msg="dcm:stop")
        else:
            self.kit.motor1.throttle = 0
            self.kit.motor2.throttle = 0
            self.kit.motor3.throttle = 0
            self.kit.motor4.throttle = 0

def main(args=None):
    rclpy.init(args=args)
    node = MockDcMotors("mock_dc_motors")
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()