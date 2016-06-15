cmake_minimum_required(VERSION 2.8)
add_library(my_math STATIC my_math.cc)

add_executable(demo main.cc)
target_link_libraries(demo my_math)

