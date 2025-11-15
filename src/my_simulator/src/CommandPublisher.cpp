#include "rclcpp/rclcpp.hpp"
#include "my_simulator_interfaces/msg/comando.hpp"

class CommandPublisher : public rclcpp::Node { 
    public: 
        //Constructor
        CommandPublisher() : Node("command_publisher"), 
            acc_(2), direction_(1), cnt_(0){ 
                //Crear el publisher
                publisher_ = this->create_publisher<my_simulator_interfaces::msg::Comando>
                    ("/my_simulator/cmd", 10);
                
                timer_ = this->create_wall_timer(
                    std::chrono::milliseconds(10), 
                    std::bind(&CommandPublisher::timerCallback, this)); 
        }
    
    private: 
        rclcpp::Publisher<my_simulator_interfaces::msg::Comando>::SharedPtr publisher_; 
        rclcpp::TimerBase::SharedPtr timer_; 
        my_simulator_interfaces::msg::Comando msg_; 
        double acc_; 
        int direction_; 
        int cnt_; 
        void timerCallback();    
}; 

void CommandPublisher::timerCallback(){ 
    if(cnt_%400 == 0){ 
        direction_ = -1 * direction_; 
    }

    msg_.acc = acc_; 
    msg_.delta = 0.35 * direction_; //Aprox 20º

    //Publicar mensage 
    publisher_->publish(msg_); 
    RCLCPP_INFO(this->get_logger(), 
                "Publicando Comando: acc=%.2f, delta=%.2f", msg_.acc, msg_.delta
    ); 

    cnt_ += 1; 
}

int main(int argc, char **argv){ 
    rclcpp::init(argc, argv); 
    rclcpp::spin(std::make_shared<CommandPublisher>()); 
    rclcpp::shutdown(); 
    return 0; 
}