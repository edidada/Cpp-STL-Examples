cmake_minimum_required(VERSION 3.8)
project(templates_example VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)

add_executable(templates_Being_ex Being_ex.cpp)
add_executable(templates_Complex Complex.cpp)
add_executable(templates_gcd gcd.cpp)
add_executable(templates_gen_iter gen_iter.cpp)
add_executable(templates_pi_monte_carlo pi_monte_carlo.cpp)