#include "my_simulator.hpp"

MySimulator::MySimulator(): Node ("MySimulatorNode"), 
    x_(0.0), y_(0.0), jaw_(0.0),
    vx_(0.0), vy_(0.0), jaw_rate_(0.0){

        RCLCPP_INFO(this-> get_logger(), "Simulador inciado"); 
        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(100),
            std::bind(&MySimulator::updateState, this)
        ); 
}

void MySimulator::updateState(){ 
    RCLCPP_INFO(this->get_logger(), "Actualizando estado");
}