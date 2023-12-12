cmake_minimum_required(VERSION 3.25)
project(tool)

set(CMAKE_CXX_STANDARD 11)

add_executable(tool main.cpp service.cpp service.h nginx.cpp nginx.h)
