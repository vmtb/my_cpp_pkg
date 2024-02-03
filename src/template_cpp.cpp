#include "rclcpp/rclcpp.hpp"

class CustomNode : public rclcpp::Node
{ 

public:
    CustomNode() : Node("robot_news_station")
    {
        RCLCPP_INFO(this->get_logger(), "Hellp cpp node");                             
    }

private:
 
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<CustomNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}