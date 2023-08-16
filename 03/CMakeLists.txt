cmake_minimum_required(VERSION 3.24)
project(03)

set(CMAKE_CXX_STANDARD 17)

include_directories(circle)
include_directories(commodity)

# Create an executable for task_2
add_executable(task_2 task_2.cpp circle/Circle.cpp commodity/Commodity.cpp)

# Create an executable for task_3
add_executable(task_3 task_3.cpp circle/Circle.cpp commodity/Commodity.cpp)

# Create an executable for task_4
add_executable(task_4 task_4.cpp circle/Circle.cpp commodity/Commodity.cpp)