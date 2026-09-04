#include <iostream>
#include <string>

class motor
{
  private:
    int hz = 1000;
    std::string motor_name;

  public:
    motor(std::string name);
    ~motor();
};
