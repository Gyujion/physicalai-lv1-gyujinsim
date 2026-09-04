#include <algorithm>
#include <iostream>
#include <memory>
#include <string>
#include <unordered_map>
#include <vector>

struct Measurement
{
    std::string sensor_name;
    double distance;
};

class Sensor
{
  public:
    ~Sensor()
    {
        std::cout << "Sensor 소멸" << std::endl;
    }
    virtual int read() = 0;
};

class Lidar : public Sensor
{
  public:
    ~Lidar()
    {
        std::cout << "Lidar 소멸" << std::endl;
    }

    int read() override
    {
        std::cout << "Lidar 데이터 읽기" << std::endl;
        return 1;
    }
};

class Imu : public Sensor
{
  public:
    ~Imu()
    {
        std::cout << "Imu 소멸" << std::endl;
    }

    int read() override
    {
        std::cout << "Imu 데이터 읽기" << std::endl;
        return 10;
    }
};

template <typename T> T clamp(T value, T min_vel, T max_vel)
{
    if (value < min_vel)
    {
        return min_vel;
    }
    if (value > max_vel)
    {
        return max_vel;
    }
    return value;
}

int main()
{
    double speed = 150.0;
    double clamped_speed = clamp(speed, 0.0, 120.0);

    std::cout << "원래 속도: " << speed << " clamp 속도: " << clamped_speed << std::endl;

    int pixel = -30;
    int clamped_pixel = clamp(pixel, 0, 255);

    std::cout << "원래 픽셀: " << pixel << " clamp 픽셀: " << clamped_pixel << std::endl;

    std::vector<std::unique_ptr<Sensor>> sensors;
    sensors.push_back(std::make_unique<Lidar>());
    sensors.push_back(std::make_unique<Imu>());

    std::unordered_map<std::string, double> recent_measurement;
    recent_measurement["Lidar_Front"] = 0.45;
    recent_measurement["Lidar_Rear"] = 1.20;

    std::cout << "전방 최근 측정값: " << recent_measurement["Lidar_Front"] << std::endl;
    std::cout << "후방 최근 측정값: " << recent_measurement["Lidar_Rear"] << std::endl;

    std::vector<Measurement> logs = {
        {"Lidar_Front", 1.5}, {"Lidar_Front", 0.8}, {"Lidar_Front", 0.4},
        {"Lidar_Rear", 2.0},  {"Lidar_Rear", 0.2},  {"Lidar_Rear", 0.45},
    };

    int close_count = std::count_if(logs.begin(), logs.end(), [](const Measurement &m) { return m.distance <= 0.35; });

    std::cout << "0.35이내 거리(count_if): " << close_count << std::endl;

    for (auto &sensor : sensors)
    {
        sensor->read();
    }

    std::cout << "객체 소멸 시작" << std::endl;

    return 0;
}
