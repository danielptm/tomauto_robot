from abc import ABC, abstractmethod

from example_interfaces.msg import String
from rclpy.node import Node


class AbstractDcMotor(ABC, Node):

    def __init__(self, name: str, subscription: str):
        super().__init__(name)
        self.subscriber_ = self.create_subscription(String, subscription, self.callback_act, 10)

    @abstractmethod
    def callback_act(self, msg: String):
        pass

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

