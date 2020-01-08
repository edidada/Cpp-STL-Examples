cmake_minimum_required(VERSION 3.8)
project(regex_example VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)

add_executable(regex_multMatches multMatches.cpp)
add_executable(regex_singleMatch singleMatch.cpp)