import rclpy
from rclpy.node import Node

class Controller(Node):

    def __init__(self, node_name: str):
        super().__init__(node_name)



def main():
    rclpy.init()
    node = Controller("controller")
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()