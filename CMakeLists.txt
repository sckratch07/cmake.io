cmake_minimum_required(VERSION 3.14)
project(CMake_Project)

add_subdirectory(Vector)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE Vector)
