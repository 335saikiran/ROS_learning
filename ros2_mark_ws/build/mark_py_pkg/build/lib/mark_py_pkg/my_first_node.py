#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

class MyNode(Node):
    def __init__(self):
        super().__init__("py_test")
        self.counter_ = 0
        self.get_logger().info("Hello World")
        self.create_timer(1.0, self.callback_function)
    
    def callback_function (self):
        self.get_logger().info("Hello" + " " + str(self.counter_))
        self.counter_ += 1


def main(args=None):
    rclpy.init(args=args)
    node = MyNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()


#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import String
 
 
class RobotNewsStationNode(Node):
    def __init__(self):
        super().__init__("robot_news_station") 
        self.robot_name_ = "C3PO"
        self.publisher_ = self.create_publisher(String, "robot_news", 10)
        self.timer_ = self.create_timer(0.5, self.publish_news)
        self.get_logger().info(" Robot New Station node has been started")
    
    def publish_news(self):
        msg = String()
        msg.data = "Hello, this is " + self.robot_name_ + "from the robot news stato"
        self.publisher_.publish(msg)
        
 
 
def main(args=None):
    rclpy.init(args=args)
    node = RobotNewsStationNode()
    rclpy.spin(node)
    rclpy.shutdown()
 
 
if __name__ == "__main__":
    main()
