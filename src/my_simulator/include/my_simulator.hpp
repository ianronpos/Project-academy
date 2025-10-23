#include "rclcpp/rclcpp.hpp"
#include "my_simulator_interfaces/msg/comando.hpp"

class MySimulator : public rclcpp::Node{ 
    public:  
        MySimulator();
        
    private: 
        //Variables del coche 
        double x_, y_, yaw_; 
        double vx_, vy_, yaw_rate_; 
        double vel_; 
        static constexpr float friction = 0.8f; //Declarando el rozamiento como cte para facilitar calculos
        static constexpr float wheel_base_ = 2.7f; //Medida entre ejes
        rclcpp::Time last_time_; //Variable para el tiempo entre 2 comandos

        //Variable del comando anterior 
        my_simulator_interfaces::msg::Comando last_command_; 

        //Subscriber para recibir los comandos 
        rclcpp::Subscription<my_simulator_interfaces::msg::Comando>::SharedPtr subscriber_; 

        //Timer y publisher 
        rclcpp::TimerBase::SharedPtr timer_; 
        void updateState(); 
        void callback(const my_simulator_interfaces::msg::Comando::SharedPtr msg); 
}; 
