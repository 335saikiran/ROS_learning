#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from mark_interfaces.msg import LedpanelState
from mark_interfaces.srv import BatteryLifeState

 
class LEDPanel(Node): 
    def __init__(self):
        super().__init__("LED_panel")
        self.declare_parameter("led_states", [0, 0, 0])
        self.led_panel_state_ = self.get_parameter("led_states").value
        self.led_panel_state_publisher_ = self.create_publisher(LedpanelState, "led_panel_state", 10)
        self.timer_ =self.create_timer(2.0, self.publisher_led_panel_state)
        self.get_logger().info("LED Panel node has been started")
        self.server_ = self.create_service(BatteryLifeState, "set_led", self.callback_set_led_service)
        self.get_logger().info("Led Panel State server has been started...")
    
    def callback_set_led_service(self, request: BatteryLifeState.Request, response: BatteryLifeState.Response):
        
        if request.led_number < 1 or request.led_number > (len(self.led_panel_state_)):
            response.success = False
            self.get_logger().info("Invalid LED number. Enter the right one..")
            return response

        if request.led_state:
            self.led_panel_state_ [request.led_number - 1]= 1
            response.success = True
            self.publisher_led_panel_state()
            self.get_logger().info("LED " + str(request.led_number) + " is on and the response is " + str(response.success))
            return response

        else:
            self.led_panel_state_ [request.led_number - 1]= 0
            response.success = False
            self.get_logger().info("LED " + str(request.led_number) + " is off and the response is " + str(response.success))
            self.publisher_led_panel_state()
            return response
 
    def publisher_led_panel_state(self):
        msg = LedpanelState()
        msg.led_state = self.led_panel_state_
        self.led_panel_state_publisher_.publish(msg)
 
def main(args=None):
    rclpy.init(args=args)
    node = LEDPanel() 
    rclpy.spin(node)
    rclpy.shutdown()
 
if __name__ == "__main__":
    main()
