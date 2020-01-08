cmake_minimum_required(VERSION 3.8)
project(stacks_example VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 14)

add_executable(stacks_stack stack.cpp)
add_executable(stacks_stack_ex1 stack_ex1.cpp)