#include "motor.hpp"

motor::motor(std::string name)
{
    motor_name = name;
    std::cout << motor_name << "생성" << std::endl;
    std::cout << "Hello, motor!" << std::endl;
}

motor::~motor()
{
    std::cout << motor_name << "소멸" << std::endl;
    std::cout << "Bye,motor!" << std::endl;
}