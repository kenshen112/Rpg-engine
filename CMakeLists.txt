# Specify the minimum version for CMake

cmake_minimum_required(VERSION 3.12)

# includes cmake/FindSDL2.cmake
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})

INCLUDE(FindPkgConfig)

set(SOURCE_FILES main.cpp)

add_executable(rpg ${SOURCE_FILES})
target_link_libraries(rpg ${SDL2_LIBRARY})
