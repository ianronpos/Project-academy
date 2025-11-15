#include "my_simulator.hpp"
#include <cmath>


MySimulator::MySimulator(): Node ("MySimulatorNode"), 
    x_(0.0), y_(0.0), yaw_(0.0),
    vx_(0.0), vy_(0.0), yaw_rate_(0.0),
    vel_(0.0) {

        RCLCPP_INFO(this-> get_logger(), "Simulador inciado"); 
        
        //Creando el suscriber 
        subscriber_ = this->create_subscription<my_simulator_interfaces::msg::Comando>(
            "/my_simulator/cmd", //Nombre del topic  
            10, //Tamaño de la cola 
            std::bind(&MySimulator::callback, this, std::placeholders::_1)); //callback


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

        //inicializando el broadcaster 
        tf_broadcaster_ = std::make_shared<tf2_ros::TransformBroadcaster>(this); 
}

void MySimulator::updateState(){ 
    RCLCPP_INFO(this->get_logger(), "Actualizando estado");
    RCLCPP_INFO(this->get_logger(), "Velocidad X:%.2f", vx_);
    

    //Actualizacion del tiempo 
    rclcpp::Time now = this->now(); 
    double dt = now.seconds() - last_time_.seconds(); 

    //Comprobacion para ver si llegan nuevos comandos y si no se esta acelerando
    //ya que puede estar un rato acelerando de forma continua y sin girar, por ejemplo una recta larga 
    if(now.seconds() - last_command_time_.seconds() > 2){  
        //TODO: REVISAR CONDICION 
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

    last_time_ = this->now(); //Guarda el tiempo de la anterior ejecucion 

    //Lanzando el mensage 
    this->publishTf();
}

void MySimulator::callback(const my_simulator_interfaces::msg::Comando::SharedPtr msg){ 
    last_command_ = *msg; //Actualizando el comando 
    last_command_time_ = this->now(); //Guardando cuando se recivio el ultimo comando
}

void MySimulator::publishTf(){ 
    geometry_msgs::msg::TransformStamped transformStamped; 

    transformStamped.header.stamp = this->get_clock()->now(); 
    transformStamped.header.frame_id = "map"; //Frame padre
    transformStamped.child_frame_id = "vehicle"; //Frame hijo

    transformStamped.transform.translation.x = x_;
    transformStamped.transform.translation.y = y_; 
    transformStamped.transform.translation.z = 0.0; 

    tf2::Quaternion q; 
    q.setRPY(0,0, yaw_); 
    transformStamped.transform.rotation.x = q.x(); 
    transformStamped.transform.rotation.y = q.y(); 
    transformStamped.transform.rotation.z = q.z(); 
    transformStamped.transform.rotation.w = q.w(); 

    tf_broadcaster_->sendTransform(transformStamped); 
}