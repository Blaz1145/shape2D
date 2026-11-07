cmake_minimum_required(VERSION 4.0)
project(shape2D)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(shapeLib)

add_executable(shape2D main.cpp
        shapeLib/src/Shape.cpp
        shapeLib/include/Shape.h
        shapeLib/src/Rectalgle.cpp
        shapeLib/include/Rectalgle.h
)

target_link_libraries(shape2D shapeLib)
