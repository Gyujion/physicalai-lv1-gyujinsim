#include <iostream>
#include <memory>

void createLeak()
{
    for (int i = 0; i < 10; i++)
    {
        std::unique_ptr<int[]> safe_data = std::make_unique<int[]>(100);
        safe_data[0] = i;
    }
}

int main()
{
    std::cout << "객체 누수 실험" << std::endl;
    createLeak();
    std::cout << "프로그램 종료" << std::endl;
}