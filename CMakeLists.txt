cmake_minimum_required(VERSION 3.30)
project(Mod7)

set(CMAKE_CXX_STANDARD 20)

add_executable(Mod7 main.cpp
        FileManager.cpp
        FileManager.h
        FrequencyManager.cpp
        FrequencyManager.h
        MenuManager.cpp
        MenuManager.h
)
