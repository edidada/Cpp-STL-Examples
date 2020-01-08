cmake_minimum_required(VERSION 3.8)
project(strings_example VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)

add_executable(strings_palindrom palindrom.cpp)
add_executable(strings_Person Person.cpp)
add_executable(strings_replace_une replace_une.cpp)
add_executable(strings_rev rev.cpp)
add_executable(strings_rev_str rev_str.cpp)
add_executable(strings_rev_words rev_words.cpp)
add_executable(strings_string_at string_at.cpp)
add_executable(strings_strtok_une strtok_une.cpp)
add_executable(strings_testSharedPtr testSharedPtr.cpp)