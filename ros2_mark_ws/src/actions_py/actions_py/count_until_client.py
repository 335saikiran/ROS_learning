#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from mark_interfaces.action import CountUntil
from rclpy.action import ActionClient
from rclpy.action.client import ClientGoalHandle, GoalStatus
 
 
class CountUntilClientNode(Node): 
    def __init__(self):
        super().__init__("count_until_client")
        self.count_until_client_ =  ActionClient(self, CountUntil, "count_until")

    def send_goal(self, target_number, period):
        #Wait for the server to be available
        while not self.count_until_client_.wait_for_server():
            self.get_logger().warn("Waiting for Server count_until...")

        #Create a Goal
        goal = CountUntil.Goal()
        goal.target_number = target_number
        goal.period = period
        

        #Send the goal
        self.get_logger().info("Sending goal")
        self.count_until_client_.send_goal_async(goal, feedback_callback = self.feedback_callback).add_done_callback(self.goal_response_callback)

        #Send a cancel request for every 2 seconds
        # self.timer_ = self.create_timer(2.0, self.cancel_goal)

    def cancel_goal(self):
        self.get_logger().info("Sending a cancel request")
        self.goal_handle.cancel_goal_async()
        self.timer_.cancel()

    
    def goal_response_callback(self, future):
        self.goal_handle: ClientGoalHandle = future.result()
        if self.goal_handle.accepted:
            self.get_logger().info("Goal accepted")
            self.goal_handle.get_result_async().add_done_callback(self.goal_result_callback)
        else:
            self.get_logger().warn("Goal is rejected")
        

    def goal_result_callback(self, future):
        status= future.result().status
        result = future.result().result
        if status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info("Goal succeeded")
        elif status == GoalStatus.STATUS_ABORTED:
            self.get_logger().error("Goal aborted")
        elif status == GoalStatus.STATUS_CANCELED:
            self.get_logger().error("Goal canceled")
        self.get_logger().info("Result: " + str(result.reached_number))

    def feedback_callback(self, feedback_msg):
        number = feedback_msg.feedback.current_number
        self.get_logger().info("Feedback: " + str(number))

 
def main(args=None):
    rclpy.init(args=args)
    node = CountUntilClientNode()
    node.send_goal(7, 1.0) 
    rclpy.spin(node)
    rclpy.shutdown()
 
if __name__ == "__main__":
    main()
