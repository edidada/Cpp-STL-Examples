cmake_minimum_required(VERSION 3.8)
project(lambdas_example VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 14)

add_executable(lambdas_lambda1 lambda1.cpp)
add_executable(lambdas_lambda_trivial lambda_trivial.cpp)
