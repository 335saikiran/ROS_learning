#!/usr/bin/env python3
import rclpy
import time
import threading
from rclpy.node import Node
from rclpy.action import ActionServer, GoalResponse, CancelResponse
from rclpy.action.server import ServerGoalHandle
from mark_interfaces.action import ReachDistance
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup

from rclpy.lifecycle import LifecycleNode
from rclpy.lifecycle.node import LifecycleState, TransitionCallbackReturn

 
class RobotDistanceServerNode(LifecycleNode): 
    def __init__(self):
        super().__init__("robot_distance_server")
        self.get_logger().info("IN constructor")
        self.goal_handle_: ServerGoalHandle = None
        self.goal_lock_ = threading.Lock()
        self.current_position_ = 50
        self.server_activated_ = False
        self.get_logger().info(f"Current position: {self.current_position_}")

    #Create Ros2 communication, including configuration
    def on_configure(self, previous_state: LifecycleState):
        self.get_logger().info("IN on configure")
        self.declare_parameter("robot_name", rclpy.Parameter.Type.STRING)
        self.robot_name_ = self.get_parameter("robot_name").value
        self.robot_distance_server_ = ActionServer(self, ReachDistance,\
                 "robot_distance" + self.robot_name_, goal_callback=self.goal_callback, cancel_callback=self.cancel_callback,\
                execute_callback=self.execute_callback, \
                    callback_group=ReentrantCallbackGroup())
        self.get_logger().info("Action server has been started")
        return TransitionCallbackReturn.SUCCESS

    #Destroy Ros2 communication, including cleanup    
    def on_cleanup(self, previous_state: LifecycleState):
        self.undeclare_parameter("robot_name")
        self.robot_name_ = ""
        self.get_logger().info("IN on cleanup")
        self.robot_distance_server_.destroy()
        return TransitionCallbackReturn.SUCCESS
     
    
    def on_shutdown(self, previous_state: LifecycleState):
        self.get_logger().info("IN on shutdown")
        self.undeclare_parameter("robot_name")
        self.robot_name_ = ""
        self.robot_distance_server_.destroy()
        return TransitionCallbackReturn.SUCCESS
    
    def on_activate(self, previous_state: LifecycleState):
        self.get_logger().info("IN on active")
        self.server_activated_ = True
        return super().on_activate(previous_state)

    def on_deactivate(self, previous_state: LifecycleState):
        self.get_logger().info("IN on deactive")
        self.server_activated_ = False
        with self.goal_lock_:
            if self.goal_handle_ is not None and self.goal_handle_.is_active:
                self.goal_handle_.abort()
        return super().on_deactivate(previous_state)
   
    
    def goal_callback(self, goal_request: ReachDistance.Goal):
        self.get_logger().info("Received a goal request")

        if not self.server_activated_:
            self.get_logger().warn("Action server is not activated")
            return GoalResponse.REJECT

        #validate the goal request
        if goal_request.position not in range(0,100) or goal_request.velocity < 0:
            self.get_logger().warn("Goal is rejected")
            return GoalResponse.REJECT
        
        #Policy: if New goal is valid, abort the existing goal and accept the new goal
        with self.goal_lock_:
            if self.goal_handle_ is not None and self.goal_handle_.is_active:
                self.goal_handle_.abort()
                self.get_logger().warn("Aborted current goal for the new goal")
        

        self.get_logger().info("Goal is accepted")
        return GoalResponse.ACCEPT

    def cancel_callback(self, goal_handle: ServerGoalHandle):
        self.get_logger().info("Received a cancel request")
        #Check if the goal is active
        if self.goal_handle_ is not None and self.goal_handle_.is_active:
            self.goal_handle_.abort()
            self.get_logger().info("Goal is aborted")
            return CancelResponse.ACCEPT

        else:
            self.get_logger().warn("No active goal to cancel")
            return CancelResponse.REJECT

    def execute_callback(self, goal_handle: ServerGoalHandle):
        with self.goal_lock_:
            self.goal_handle_ = goal_handle

        #Get the poisition and velocity from the goal request
        target_position = goal_handle.request.position
        velocity = goal_handle.request.velocity
        result = ReachDistance.Result()
        feedback = ReachDistance.Feedback()

        #Execute the action
        self.get_logger().info("Executing action")
        

        while rclpy.ok():

            #Check if the goal is aborted
            if not goal_handle.is_active:
                result.final_position = self.current_position_
                result.message = "Goal aborted due to a new goal, or node deactivated"
                return result
            
            #Check if the goal is canceled
            if goal_handle.is_cancel_requested:
                result.final_position = self.current_position_
                if target_position == self.current_position_:
                    result.message = "Goal Success"
                    goal_handle.succeed()
                else:
                    result.message = "Goal canceled:" 
                    goal_handle.canceled()
                return result

            difference = target_position - self.current_position_
            
            if difference == 0:
                self.get_logger().info("Goal is reached")
                result.final_position = self.current_position_
                result.message = "Goal reached"
                goal_handle.succeed()
                return result

            elif difference > 0:
                if difference >= velocity:
                    self.current_position_ += velocity
                    
                else:
                    self.current_position_ += difference
                    
            else:
                if abs(difference) >= velocity:
                    self.current_position_ -= velocity
                    
                else:
                    self.current_position_ -= abs(difference)
                    
                           
            self.get_logger().info(f"Robot position: {self.current_position_}")
            feedback.current_position = self.current_position_
            goal_handle.publish_feedback(feedback)
            time.sleep(1.0)
    
def main(args=None):
    rclpy.init(args=args)
    node = RobotDistanceServerNode() 
    rclpy.spin(node, MultiThreadedExecutor())
    rclpy.shutdown()
 
if __name__ == "__main__":
    main()