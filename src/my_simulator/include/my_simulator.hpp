#include "rclcpp/rclcpp.hpp"

class MySimulator : public rclcpp::Node{ 
    public:  
        MySimulator(); 

    private: 
        //Variables del coche 
        double x_, y_, jaw_; 
        double vx_, vy_, jaw_rate_; 

        //Timer y publisher 
        rclcpp::TimerBase::SharedPtr timer_; 
        void updateState(); 

}; 
