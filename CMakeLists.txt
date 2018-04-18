cmake_minimum_required(VERSION 3.9)
project(Simulator)

set(CMAKE_CXX_STANDARD 11)

add_executable(Simulator
        Controller.cpp
        Controller.h
        Game.cpp
        Game.h
        Life.cpp
        Life.h
        main.cpp
        main_menu.cpp
        main_menu.h
        Model.cpp
        Model.h
        play.cpp
        play.h
        ProgramMode.h
        View.cpp
        View.h)
