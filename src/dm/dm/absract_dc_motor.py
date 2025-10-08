from abc import ABC, abstractmethod

from tomauto_interfaces.msg import DriveCommand
from rclpy.node import Node
import threading


class AbstractDcMotor(ABC, Node):

    def __init__(self, name: str):
        super().__init__(name)
        self.current_action = "stop"
        self.thread_running = False
        self.thread = None
        self.subscriber_ = self.create_subscription(DriveCommand, "dc_motor_sub", self.callback_act, 10)

    def callback_act(self, msg: DriveCommand):
        self.thread_running = False
        self.current_action = msg.direction
        self.thread = threading.Thread(target=self.thread_function)
        self.thread_running = True
        self.thread.start()


    def thread_function(self):
        if self.current_action == 'forward':
            self.forward()
        elif self.current_action  == 'backup':
            self.backup()
        elif self.current_action  == 'right':
            self.right()
        elif self.current_action  == 'left':
            self.left()
        elif self.current_action  == 'stop':
            self.stop()
        else:
            print("message received: ", self.current_action)


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
    def stop(self):
        pass

