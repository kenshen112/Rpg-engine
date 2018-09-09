# Specify the minimum version for CMake

cmake_minimum_required(VERSION 3.12)

# includes cmake/FindSDL2.cmake
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/src)

find_package(SDL2 REQUIRED)

find_package(SDL2_image REQUIRED)

find_package(SDL_ttf REQUIRED)

include_directories(${SDL2_INCLUDE_DIRS} ${SDL2_IMAGE_INCLUDE_DIRS})

target_link_libraries(Exe ${SDL2_LIBRARIES} ${SDL2_IMAGE_LIBRARIES})

set(SOURCE_FILES src/main.cpp)

add_executable(rpg ${SOURCE_FILES})


