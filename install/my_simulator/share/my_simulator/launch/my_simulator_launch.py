from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description(): 
    return LaunchDescription([
        Node(
            package='my_simulator',
            executable='talker',
            name='simulator', 
            output='screen'            
        ), 
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            parameters=['-d', 'config/my_simulator.rviz'],
            output='screen'
        ),
        ]
    )