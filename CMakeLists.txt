cmake_minimum_required(VERSION 3.25)
project(console_raycast)

set(CMAKE_CXX_STANDARD 17)

add_executable(console_raycast main.cpp
        Engine/Game.cpp Engine/Game.h
        Engine/Player.cpp Engine/Player.h
        Engine/Map.cpp Engine/Map.h)
