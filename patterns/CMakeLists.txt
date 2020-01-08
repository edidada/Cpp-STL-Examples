cmake_minimum_required(VERSION 3.8)
project(patterns_example VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)

add_executable(patterns_CpAs CpAs.cpp)
add_executable(patterns_functor functor.cpp)
add_executable(patterns_par_pack par_pack.cpp)
add_executable(patterns_pol_ex1 pol_ex1.cpp)
add_executable(patterns_Ston Ston.cpp)