#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from mark_interfaces.srv import BatteryLifeState
from functools import partial
 
 
class BatteryClient(Node): 
    def __init__(self):
        super().__init__("Battery")
        self.battery_state_ = "full"
        self.last_time_battery_state_changed_ = self.get_current_time_seconds()
        self.battery_timer_ = self.create_timer(0.1, self.check_battery_state)
        self.client_ = self.create_client(BatteryLifeState, "set_led")
        self.get_logger().info("Battery Client has been started")

    def get_current_time_seconds(self):
        seconds, nanoseconds = self.get_clock().now().seconds_nanoseconds()
        return seconds + nanoseconds / 1e9
    
    def check_battery_state(self):
        time_now = self.get_current_time_seconds()

        if self.battery_state_ == "full":
            if time_now - self.last_time_battery_state_changed_ > 4.0:
                self.battery_state_ = "low"
                self.get_logger().info("Battery is empty! Charging.... ")
                self.call_battery_state(1, True)
                self.last_time_battery_state_changed_ = time_now
        elif self.battery_state_ == "low":
            if time_now - self.last_time_battery_state_changed_ > 6.0:
                self.battery_state_ = "full"
                self.get_logger().info("Battery is full! Disconnecting.... ")
                self.call_battery_state(1, False)
                self.last_time_battery_state_changed_ = time_now

    def call_battery_state(self, led_number, led_state):
        while not self.client_.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server to set led...")
        
        request = BatteryLifeState.Request()
        request.led_number = led_number
        request.led_state = led_state

        future = self.client_.call_async(request)
        future.add_done_callback(partial(self.callback_call_battery_state, request = request))

    def callback_call_battery_state(self, future, request):
        response: BatteryLifeState.Response = future.result()
        if response.success:
            self.get_logger().info("LED state was changed")
        else:
            self.get_logger().info("LED state was not changed")
 
def main(args=None):
    rclpy.init(args=args)
    node = BatteryClient()
    rclpy.spin(node)
    rclpy.shutdown()
 
if __name__ == "__main__":
    main()
