from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    ld = LaunchDescription()

    number_publisher = Node(
        package="mark_py_pkg",
        executable="number_publisher",
        name="my_number_publisher",
        namespace="/abc",
        remappings=[("/number", "/my_number")],
        parameters=[
            {"number": 12},
            {"time_period": 1.0}
                
        ]    
    )

    number_counter = Node(
        package="mark_py_pkg",
        executable="number_counter",
        name="my_number_counter",
        namespace="/abc",
        remappings=[("/number", "/my_number")]
    )

    ld.add_action(number_publisher)
    ld.add_action(number_counter)

    return ld