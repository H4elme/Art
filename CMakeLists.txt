cmake_minimum_required(VERSION 4.0.1)

set(this Art)

project(${this} CXX)

set(CMAKE_CXX_STANDARD 20)

enable_testing()

add_subdirectory(googletest)

set(sources 
    main.cpp
)

set(headers 

)

add_library(${this} STATIC ${sources})

add_subdirectory(test)