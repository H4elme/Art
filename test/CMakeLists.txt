cmake_minimum_required(VERSION 4.0.1)

set (this tests)

set (sources 
   tests.cpp
)

add_executable(${this} ${sources})

 target_link_libraries(${this} PUBLIC
    gtest_main
    Art
 )

 add_test(
   NAME ${this}
   COMMAND ${this}
 )