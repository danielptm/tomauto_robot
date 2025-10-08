from tomauto_interfaces.msg import DriveCamera
from tomauto_interfaces.msg import DriveCommand
from example_interfaces.msg import String

import rclpy
from rclpy.node import Node



class Controller(Node):

    def __init__(self, node_name: str):
        super().__init__(node_name)
        self.drive_camera_subscription_ = self.create_subscription(DriveCamera, "/drive_camera_sub", self.direct_drive_instruction, 10)
        self.dc_motor_publisher_ = self.create_publisher(DriveCommand, "dc_motor_sub", 10)


    def direct_drive_instruction(self, msg: DriveCamera):
        print("direct drive instruction called")
        drive_command = DriveCommand()
        if msg.detected_object == "forward_arrow":
            drive_command.direction = "forward"
        elif msg.detected_object == "right_arrow":
            drive_command.direction = "right"
        elif msg.detected_object == "left_arrow":
            drive_command.direction = "left"
        elif msg.detected_object == "turnaround_arrow":
            drive_command.direction = "turnaround"
        else:
            drive_command.direction = "stop"
        self.dc_motor_publisher_.publish(drive_command)

def main(args=None):
    rclpy.init(args=args)
    node = Controller("controller")
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()