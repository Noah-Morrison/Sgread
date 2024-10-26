cmake_minimum_required(VERSION 3.27)
project(Sgread)

set(CMAKE_CXX_STANDARD 17)

include_directories(Engine)
include_directories(Game)

find_package(SDL2 REQUIRED)
find_package(OpenGL REQUIRED)
find_package(box2d REQUIRED)
find_package(unofficial-enet CONFIG REQUIRED)

file(GLOB ENGINE_SOURCES
        "Engine/*.cpp"
        "Engine/*.h"
)

file(GLOB GAME_SOURCES
        "Game/*.cpp"
        "Game/*.h"
)

add_executable(Sgread
        ${ENGINE_SOURCES}
        ${GAME_SOURCES}
)

target_link_libraries(Sgread
        SDL2::SDL2
        OpenGL::GL
        box2d::box2d
        unofficial::enet::enet
)
