cmake_minimum_required(VERSION 3.8)
project(io_example VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)

add_executable(io_append_to_file append_to_file.cpp)
add_executable(io_check_cpu check_cpu.cpp)