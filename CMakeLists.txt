cmake_minimum_required(VERSION 3.14)
project(TestTwo) #optional

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 17)

add_executable(Two two.cpp) #same as g++ two.cpp -o Two

# For GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)