# Specify the minimum version for CMake

project(rpg)

cmake_minimum_required(VERSION 3.11)

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/Modules)

set(SOURCE_FILES src/main.cpp src/game.cpp src/Characters.cpp src/Battle.cpp src/sprite.cpp src/tileMaps.cpp 
src/ui.cpp src/actor.cpp src/velocity.cpp src/move.h src/Enemy.cpp src/common.h src/creature.h src/Events.cpp src/Invetory.cpp src/Items.cpp)

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(SDL2_ttf REQUIRED)


include_directories(${SDL2_INCLUDE_DIR}
                    ${SDL2_IMAGE_INCLUDE_DIR}
                    ${SDL2_TTF_INCLUDE_DIR})

add_executable(rpg ${SOURCE_FILES})

target_link_libraries(rpg ${SDL2_LIBRARY}
                             ${SDL2_IMAGE_LIBRARIES}
                             ${SDL2_TTF_LIBRARIES})


