cmake_minimum_required(VERSION 3.27)
project(tool)

set(CMAKE_CXX_STANDARD 11)

add_executable(tool main.cpp createService.cpp createService.h)
