cmake_minimum_required(VERSION 4.0.1)

set(this Art)

project(${this} CXX)

# raylib

include(FetchContent)

set(RAYLIB_VERSION 5.5)

FetchContent_Declare(
    raylib
    URL https://github.com/raysan5/raylib/archive/refs/tags/${RAYLIB_VERSION}.tar.gz
    FIND_PACKAGE_ARGS ${RAYLIB_VERSION}
)
set(BUILD_EXAMPLES OFF CACHE INTERNAL "")
FetchContent_MakeAvailable(raylib) 

# project 

set(CMAKE_CXX_STANDARD 20)

enable_testing()

add_subdirectory(googletest)

set(sources 
    main.cpp
    cell.cpp
)

set(headers
    constants.h 
    cell.h     
)

add_subdirectory(test)

add_executable(main ${sources})
target_compile_definitions(main PRIVATE RAYLIB_DRAWING_ENABLED)
target_link_libraries(main raylib)

add_library(Art_lib STATIC ${sources})

