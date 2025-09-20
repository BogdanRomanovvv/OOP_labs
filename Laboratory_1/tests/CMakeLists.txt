

cmake_minimum_required(VERSION 3.16)
project(ChocolateDividerTests)

# Автоматическая загрузка googletest
include(FetchContent)
FetchContent_Declare(
	googletest
	URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
FetchContent_MakeAvailable(googletest)

include_directories(../include)

add_executable(runTests test_chocolate.cpp ../src/chocolate.cpp)
target_link_libraries(runTests gtest_main)

enable_testing()
add_test(NAME runTests COMMAND runTests)
