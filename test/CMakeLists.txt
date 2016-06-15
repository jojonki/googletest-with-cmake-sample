cmake_minimum_required(VERSION 2.8)

# set runtime directory
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

# declare GTEST_ROOT
set(GTEST_ROOT ~/googletest/googletest/)

# Include files directory
include_directories(${GTEST_ROOT}/include/)

# Library directory
link_directories(${GTEST_ROOT}/build/)

# Generate executable file
add_executable(Test ${CMAKE_CURRENT_SOURCE_DIR}/test.cc)

# Link libraries
target_link_libraries(Test my_math gtest gtest_main pthread)

