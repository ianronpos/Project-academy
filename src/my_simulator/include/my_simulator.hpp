#include "rclcpp/rclcpp.hpp"
#include "my_simulator_interfaces/msg/comando.hpp"
#include "tf2_ros/transform_broadcaster.h"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "tf2/LinearMath/Quaternion.h"
#include "tf2_ros/static_transform_broadcaster.h"

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
        rclcpp::Time last_command_time_; //Variable para el tiempo entre 2 comandos
        rclcpp::Time last_time_; //Variable auxiliar

        //Variable del comando anterior 
        my_simulator_interfaces::msg::Comando last_command_; 

        //Subscriber para recibir los comandos 
        rclcpp::Subscription<my_simulator_interfaces::msg::Comando>::SharedPtr subscriber_; 

        //Creando el broadcaster
        std::shared_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_; 

        //Timer y publisher 
        rclcpp::TimerBase::SharedPtr timer_; 
        void updateState(); 
        void callback(const my_simulator_interfaces::msg::Comando::SharedPtr msg); 
        void publishTf(); 
}; 
