cmake_minimum_required(VERSION 3.14)
project(bubble CXX)
set(CMAKE_CXX_STANDARD 17)
add_compile_options(--coverage -O0 -g)
add_link_options(--coverage)

find_package(GTest REQUIRED)
add_library(sorter src/Sorter.cpp)
add_executable(sorter_tests test/SorterTest.cpp)
target_link_libraries(sorter_tests sorter GTest::gtest_main)

enable_testing()
add_test(NAME sorter_tests COMMAND sorter_tests)
