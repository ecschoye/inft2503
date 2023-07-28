cmake_minimum_required(VERSION 3.24)
project(06)

set(CMAKE_CXX_STANDARD 17)

find_package(Boost 1.74.0 COMPONENTS system REQUIRED)

include_directories(/opt/homebrew/opt/boost/include)


# Executable 1: chess
add_executable(chess chess.cpp)

# Executable 2: echoserver
add_executable(echoserver echoserver.cpp)
