#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.srv import SetBool
 

 
def main(args=None):
    rclpy.init(args=args)
    node = Node("reset_counter_client") 
    
    client = node.create_client(SetBool, "reset_counter")

    while not client.wait_for_service(1.0):
        node.get_logger().warn("Waiting for Server reset_counter...")
    
    request = SetBool.Request()
    request.data = False
    
    future = client.call_async(request)
    rclpy.spin_until_future_complete(node, future)
        
    response = future.result()
    
    if response.success:
        node.get_logger().info("Counter has been reset")
    else:
        node.get_logger().info("Counter has not been reset") 
    
    rclpy.shutdown()
 
if __name__ == "__main__":
    main()
