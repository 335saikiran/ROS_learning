#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from mark_interfaces.action import ReachDistance
from rclpy.action.client import ClientGoalHandle, GoalStatus
from example_interfaces.msg import Empty
 
 
class RobotDistanceClientNode(Node): 
    def __init__(self):
        super().__init__("robot_distance_client")
        self.goal_handle_: ClientGoalHandle = None
        self.robot_distance_client_ = ActionClient(self, ReachDistance, "robot_distance")
        self.cancel_subscriber_ = self.create_subscription(Empty, "cancel", self.callback_cancel_move, 10)
        self.get_logger().info("Action client has been started")

    def send_goal(self, position, velocity):
        #Wait for the server to be available
        self.get_logger().warn("Waiting for Server robot_distance...")
        self.robot_distance_client_.wait_for_server()
                
        #create a Goal
        goal = ReachDistance.Goal()
        goal.position = position
        goal.velocity = velocity

        #send the goal
        self.get_logger().info(f"Sending goal with position: {position} and velocity: {velocity}")
        self.robot_distance_client_.send_goal_async(goal, feedback_callback = self.feedback_callback).add_done_callback(self.goal_response_callback)
        
    def callback_cancel_move(self, msg):
        self.cancel_goal()
        

    def cancel_goal(self):
        if self.goal_handle_ is not None:
            self.get_logger().info("Sending a cancel request")
            self.goal_handle_.cancel_goal_async()
    
    def goal_response_callback(self, future):
        self.goal_handle_: ClientGoalHandle = future.result()
        if self.goal_handle_.accepted:
            self.get_logger().info("Goal accepted")
            self.goal_handle_.get_result_async().add_done_callback(self.goal_result_callback)
        else:
            self.get_logger().warn("Goal is rejected")

    def goal_result_callback(self, future):
        result = future.result().result
        status = future.result().status
        if status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info("Goal succeeded")
        elif status == GoalStatus.STATUS_ABORTED:
            self.get_logger().error("Goal aborted")
        elif status == GoalStatus.STATUS_CANCELED:
            self.get_logger().error("Goal canceled")
        
        self.get_logger().info("Result: " + str(result.final_position))
        self.get_logger().info("Message: " + str(result.message))

    def feedback_callback(self, feedback_msg):
        position = feedback_msg.feedback.current_position
        self.get_logger().info("Feedback: position is " + str(position))    
 
 
def main(args=None):
    rclpy.init(args=args)
    node = RobotDistanceClientNode()
    node.send_goal(76, 1)
    rclpy.spin(node)
    rclpy.shutdown()
 
if __name__ == "__main__":
    main()
