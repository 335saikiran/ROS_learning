#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.srv import SetBool
from functools import partial
 
 
class ResetCounterClient(Node): 
    def __init__(self):
        super().__init__("reset_counter_client_oop") 
        self.client_ = self.create_client(SetBool, "reset_counter")

    def call_reset_counter(self, a):
        while not self.client_.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server reset_counter...")
        
        request = SetBool.Request()
        request.data = a

        future = self.client_.call_async(request)
        future.add_done_callback(partial(self.callback_call_reset_counter, request = request))

    def callback_call_reset_counter(self, future, request):
        response = future.result()
        if response.success:
            self.get_logger().info("Counter has been reset")
        else:
            self.get_logger().info("Counter has not been reset")
       
 
def main(args=None):
    rclpy.init(args=args)
    node = ResetCounterClient()
    node.call_reset_counter(False)
    rclpy.spin(node)
    rclpy.shutdown()
 
if __name__ == "__main__":
    main()
