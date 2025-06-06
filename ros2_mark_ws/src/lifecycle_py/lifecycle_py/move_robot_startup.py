#!/usr/bin/env python3
import rclpy
import time
from rclpy.node import Node
from lifecycle_msgs.srv import ChangeState
from lifecycle_msgs.msg import Transition

 
 
class MoveRobotStartupNode(Node):
    def __init__(self):
        super().__init__("lifecycle_node_manager")
        self.declare_parameter("managed_node_names", rclpy.Parameter.Type.STRING_ARRAY)
        node_name_list = self.get_parameter("managed_node_names").value 
        self.get_logger().info("names:" + str(node_name_list))
        self.client_list = []
        for node_name in node_name_list:
            service_change_state_name = "/" + node_name + "/change_state"
            self.client_list.append(self.create_client(ChangeState, service_change_state_name))

    def change_state(self, transition):
        for client in self.client_list:
            client.wait_for_service()
            request = ChangeState.Request()
            request.transition = transition
            future = client.call_async(request)
            rclpy.spin_until_future_complete(self, future)

    def initialization_sequence(self):
        #Unconfigured to inactive
        self.get_logger().info("Trying to switch to configured state")
        transition = Transition()
        transition.id = Transition.TRANSITION_CONFIGURE
        transition.label = "configure"
        self.change_state(transition)
        self.get_logger().info("Configuring OK, now inactive")

        #sleep just for demo purposes
        time.sleep(3.0)

        #Inactive to active
        self.get_logger().info("Trying to switch to active state")
        transition = Transition()
        transition.id = Transition.TRANSITION_ACTIVATE
        transition.label = "activate"
        self.change_state(transition)
        self.get_logger().info("Activating OK, now active")

 
def main(args=None):
    rclpy.init(args=args)
    node = MoveRobotStartupNode()
    node.initialization_sequence() 
    rclpy.shutdown()
 
if __name__ == "__main__":
    main()
