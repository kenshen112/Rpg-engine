# Specify the minimum version for CMake

project(rpg)

cmake_minimum_required(VERSION 3.11)

# includes cmake/FindSDL2.cmake
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/src)

set(SOURCE_FILES src/main.cpp)

find_package(SDL2 REQUIRED)

find_package(SDL2_image REQUIRED)

find_package(SDL_ttf REQUIRED)

add_executable(rpg ${SOURCE_FILES})

include_directories(${SDL2_INCLUDE_DIRS} ${SDL2_IMAGE_INCLUDE_DIRS})

target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARY} ${SDL2_IMAGE_LIBRARIES})




