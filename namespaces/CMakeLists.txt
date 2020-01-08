cmake_minimum_required(VERSION 3.8)
project(namespaces_example VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)

add_executable(namespaces_nsp nsp.cpp)