#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from mark_interfaces.msg import HardwareStatus
 
 
class HardwareStatusPublisher(Node): 
    def __init__(self):
        super().__init__("hardware_status_publisher")
        self.hw_status_publisher_ = self.create_publisher(HardwareStatus, "hardware_status", 10)
        self.timer_ = self.create_timer(1.0, self.hw_status_publisher)
        self.get_logger().info("Hardware Status Publisher has been started")

    def hw_status_publisher(self):
        msg = HardwareStatus()
        msg.temperature = 46.8
        msg.are_motors_ready = True
        msg.debug_message = "nothing special"
        self.hw_status_publisher_.publish(msg) 
 
 
def main(args=None):
    rclpy.init(args=args)
    node = HardwareStatusPublisher() 
    rclpy.spin(node)
    rclpy.shutdown()
 
if __name__ == "__main__":
    main()
