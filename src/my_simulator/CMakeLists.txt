cmake_minimum_required(VERSION 3.8)
project(my_simulator)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(my_simulator_interfaces REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2 REQUIRED)
find_package(geometry_msgs REQUIRED)

include_directories(
  include
)

#Crear ejecutable 
add_executable(
  my_simulator src/main.cpp src/my_simulator.cpp
)

ament_target_dependencies(my_simulator 
  rclcpp 
  my_simulator_interfaces
  tf2_ros
  tf2 
  geometry_msgs
  )

add_executable(
  CommandPublisher src/CommandPublisher.cpp 
)

ament_target_dependencies(CommandPublisher
  rclcpp 
  my_simulator_interfaces
)

install(TARGETS
  my_simulator
  CommandPublisher
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY launch config
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
