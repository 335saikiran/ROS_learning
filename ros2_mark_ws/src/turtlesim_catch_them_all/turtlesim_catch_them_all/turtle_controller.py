#!/usr/bin/env python3
import rclpy
import math
from rclpy.node import Node
from turtlesim.msg import Pose
from turtlesim.srv import Kill
from geometry_msgs.msg import Twist
from mark_interfaces.msg import Turtle
from mark_interfaces.msg import TurtleArray
from mark_interfaces.srv import CatchTurtle
from functools import partial
 
 
class TurtleControllerNode(Node): 
    def __init__(self):
        super().__init__("turtle_controller")
        self.pose_: Pose = None
        self.turtle_to_catch_: Turtle = None
        self.catch_closest_turtle_first_ = True
        self.pose_subcriber_ = self.create_subscription(Pose, "/turtle1/pose", self.callback_pose, 10)
        self.alive_turtles_subscriber_ = self.create_subscription(TurtleArray, "alive_turtles", self.callback_alive_turtles, 10)
        self.catch_turtle_client_ = self.create_client(CatchTurtle, "catch_turtle")
        self.cmd_vel_publisher_ = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        self.control_loop_timer_ = self.create_timer(0.01, self.control_loop)


    def callback_alive_turtles(self, msg: TurtleArray):
        if len(msg.turtles) > 0:
            if self.catch_closest_turtle_first_:
                closest_turtle = None
                closest_distance = None

                for turtle in msg.turtles:
                    dist_x = turtle.x - self.pose_.x
                    dist_y = turtle.y - self.pose_.y
                    distance = math.sqrt(dist_x**2 + dist_y**2)
                    if closest_turtle is None or distance < closest_distance:
                        closest_turtle = turtle
                        closest_distance = distance
                self.turtle_to_catch_ = closest_turtle
            else:
                self.turtle_to_catch_ = msg.turtles[0]

    def callback_pose(self, pose: Pose):
        self.pose_ = pose
    
    def control_loop(self):
        if self.pose_ is None or self.turtle_to_catch_ is None:
            self.get_logger().warn("Waiting for turtles...")
            return
        
        dist_x = self.turtle_to_catch_.x - self.pose_.x
        dist_y = self.turtle_to_catch_.y - self.pose_.y
        distance = math.sqrt(dist_x**2 + dist_y**2)
        cmd = Twist()
        
        if distance > 0.5:
            # linear position
            cmd.linear.x = 2*distance

            #angular position
            goal_theta = math.atan2(dist_y, dist_x)
            diff_theta = goal_theta - self.pose_.theta
            if diff_theta > math.pi:
                diff_theta -=2*math.pi
            elif diff_theta < -math.pi:
                diff_theta +=2*math.pi
            cmd.angular.z = 6*diff_theta
        else:
            #reached the target
            cmd.linear.x = 0.0
            cmd.angular.z = 0.0
            self.call_kill_service(self.turtle_to_catch_.name)
            self.turtle_to_catch_ = None       

        self.cmd_vel_publisher_.publish(cmd)

    def call_kill_service(self, turtle_name):
        while not self.catch_turtle_client_.wait_for_service(1.0):
            self.get_logger().warn("Waiting for catch turtle service...")

        request = CatchTurtle.Request()
        request.name = turtle_name

        future = self.catch_turtle_client_.call_async(request)
        future.add_done_callback(partial(self.callback_call_catch_turtle_service, turtle_name = turtle_name))

    def callback_call_catch_turtle_service(self, future, turtle_name):
        response: CatchTurtle.Response = future.result()
        if not response.success:
            self.get_logger().error("Turtle" + turtle_name + "could not be removed")

 
 
def main(args=None):
    rclpy.init(args=args)
    node = TurtleControllerNode() 
    rclpy.spin(node)
    rclpy.shutdown()
 
if __name__ == "__main__":
    main()
