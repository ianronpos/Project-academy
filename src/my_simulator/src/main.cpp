#include "rclcpp/rclcpp.hpp"
#include "my_simulator.hpp"

int main (int argc, char **argv){ 
    rclcpp::init(argc, argv); 
    rclcpp::spin(std::make_shared<MySimulator>()); 
    rclcpp::shutdown();
    return 0; 
}
