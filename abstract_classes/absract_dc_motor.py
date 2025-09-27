from abc import ABC, abstractmethod

class AbstractDcMotor(ABC):

    def __init__(self):
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

