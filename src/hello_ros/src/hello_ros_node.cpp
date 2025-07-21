#include "ros/ros.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "hello_ros_node");
    ros::NodeHandle nh;

    ros::Rate loop_rate(1); // 1Hz

    int count = 0;
    while (ros::ok())
    {
        ROS_INFO("Hello, ROS! Count: %d", count++);
        ros::spinOnce();
        loop_rate.sleep();
    }
    return 0;
}
