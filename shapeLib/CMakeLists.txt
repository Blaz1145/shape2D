cmake_minimum_required(VERSION 4.0)
project(shapeLib)

add_library(shapeLib src/Point.cpp include/Point.h
        src/Rectalgle.cpp
        include/Rectalgle.h
)

target_include_directories(shapeLib PUBLIC include)