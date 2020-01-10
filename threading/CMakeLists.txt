cmake_minimum_required(VERSION 3.8)
project(threading_example VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)

add_executable(threading_task_deux task_deux.cpp)
find_package(Threads REQUIRED)
target_link_libraries(threading_task_deux Threads::Threads)
