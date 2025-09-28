from abc import ABC, abstractmethod

from example_interfaces.msg import String
from rclpy.node import Node


class AbstractDcMotor(ABC, Node):

    def __init__(self, name: str):
        super().__init__(name)
        self.current_action = "stop"
        self.subscriber_ = self.create_subscription(String, "dc_motor_sub", self.callback_act, 10)

    def callback_act(self, msg: String):
        print("message received: ", msg.data)
        self.current_action = msg.data
        if self.current_action == 'forward':
            self.forward()
        elif self.current_action  == 'backup':
            self.backup()
        elif self.current_action  == 'right':
            self.right()
        elif self.current_action  == 'left':
            self.left()
        if self.current_action  == 'stop':
            self.stop()
        if self.current_action  == 'turnaround':
            self.turnaround()

    @abstractmethod
    def forward(self):
        pass

    @abstractmethod
    def right(self):
        pass

    @abstractmethod
    def left(self):
        pass

    @abstractmethod
    def backup(self):
        pass

    @abstractmethod
    def turnaround(self):
        pass

    @abstractmethod
    def stop(self):
        pass

