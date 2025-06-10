cmake_minimum_required(VERSION 4.0.1)

set (this tests)

set (sources 
   tests.cpp
   ../cell.cpp
)

add_executable(${this} ${sources})

target_link_libraries(${this} PUBLIC
   gtest
   gtest_main
   Art_lib
   raylib
)


add_test(
   NAME ${this}
   COMMAND ${this} --gtest_color=1
)