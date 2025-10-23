#include "my_simulator.hpp"
#include <cmath>


MySimulator::MySimulator(): Node ("MySimulatorNode"), 
    x_(0.0), y_(0.0), yaw_(0.0),
    vx_(0.0), vy_(0.0), yaw_rate_(0.0),
    vel_(0.0) {

        RCLCPP_INFO(this-> get_logger(), "Simulador inciado"); 
        
        //Llamada peridodica a la funcion updateState
        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(100),
            std::bind(&MySimulator::updateState, this)
        ); 
        //Opteniendo el tiempo en el que se inicia el simulador
        last_time_ = this->now(); 

        //Inicializando los valores de last_command_
        last_command_.acc = 0; 
        last_command_.delta = 0; 

}

void MySimulator::updateState(){ 
    RCLCPP_INFO(this->get_logger(), "Actualizando estado");

    //Creando el suscriber 
    subscriber_ = this->create_subscription<my_simulator_interfaces::msg::Comando>(
      "My_simuladotr/cmd", //Nombre del topic  
      10, //Tamaño de la cola 
      std::bind(&MySimulator::callback, this, std::placeholders::_1)); //callback

    //Actualizacion del tiempo 
    rclcpp::Time now = this->now(); 
    double dt = now.seconds() - last_time_.seconds(); 

    //Comprobacion para ver si llegan nuevos comandos 
    if(now.seconds() -last_time_.seconds() > 60.0){ 
        if(vel_ >= 0){ //Comprobando si el coche iba hacia delante   
            vel_ -= vel_ * friction; 
        } else { //Si el coche iba hacia atras 
            vel_ += vel_ * friction; 
        }
    } else { 
        vel_ = last_command_.acc * dt; 
    }

    //Actualizacion de estado de variables del coche 
    yaw_rate_ = (vel_/wheel_base_) * tan(last_command_.delta); 
    yaw_ = yaw_ + yaw_rate_ * dt; 
    vx_ = vel_ * cos(yaw_); 
    vy_ = vel_ * sin(yaw_); 
    x_ += vx_ * dt; 
    y_ += vy_ * dt; 
}

void MySimulator::callback(const my_simulator_interfaces::msg::Comando::SharedPtr msg){ 
    last_command_ = *msg; //Actualizando el comando 
    last_time_ = this->now(); //Guardando cuando se recivio el ultimo comando
}