cmake_minimum_required(VERSION 3.8)
project(turtle_cpp)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(turtlesim REQUIRED)
find_package(geometry_msgs REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

add_executable(pub src/distance_publisher.cpp)
add_executable(sub src/distance_subscriber.cpp)
add_executable(square src/square_move.cpp)
ament_target_dependencies(pub rclcpp std_msgs turtlesim)
ament_target_dependencies(sub rclcpp std_msgs)
ament_target_dependencies(square rclcpp geometry_msgs)

install(
  TARGETS
  pub
  sub
  square
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
