cmake_minimum_required(VERSION 3.24)
project(01)

set(CMAKE_CXX_STANDARD 17)

add_executable(a task_a.cpp)

add_executable(b task_b.cpp)

# Copy "temperatures" to build directory
configure_file(temperatures temperatures COPYONLY)