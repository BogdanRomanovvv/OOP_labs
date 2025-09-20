cmake_minimum_required(VERSION 3.16)
project(ChocolateDivider)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)
add_executable(chocolate src/main.cpp src/chocolate.cpp)

enable_testing()
add_subdirectory(tests)