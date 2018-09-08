# Specify the minimum version for CMake

cmake_minimum_required(VERSION 3.12)


add_exacuteable(rpg ${PROJECT_SOURCE_DIR}/main.cpp)


SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

include_directories("${PROJECT_SOURCE_DIR}")
