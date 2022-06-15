cmake_minimum_required(VERSION 3.22)
project(datastructures)

set(CMAKE_CXX_STANDARD 11)

add_executable(datastructures main.cpp src/arraylist.cpp src/linkedlist.cpp)
target_include_directories(datastructures PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
