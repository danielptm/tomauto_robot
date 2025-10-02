import rclpy
from example_interfaces.msg import String
from rclpy.node import Node

from tomauto_interfaces import DriveCamera


class Controller(Node):

    def __init__(self, node_name: str):
        super().__init__(node_name)
        self.subscriber = self.create_subscription(DriveCamera, "drive_camera", self.direct_drive_instruction, 10)
        self.publisher = self.create_publisher(String, "dc_motor_sub", 10)
        self.camera_opts = ['forward_arrow', 'right_arrow', 'left_arrow', 'turn_around']
        print("setup complete")


    def direct_drive_instruction(self, msg: String):
        self.publisher.publish(msg)





def main():
    rclpy.init()
    node = Controller("controller")
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()