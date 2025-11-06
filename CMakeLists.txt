cmake_minimum_required(VERSION 3.14)
project(CMake_Project)

add_subdirectory(Vector)

add_executable(Executable main.cpp)
target_link_libraries(Executable PRIVATE Vector)
