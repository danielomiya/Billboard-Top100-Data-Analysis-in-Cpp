cmake_minimum_required(VERSION 3.12)


project(billboard_top100 
        VERSION 0.0.1
        LANGUAGES CXX)

add_library(nodeLib
            src/nodeClass.cpp
            src/nodeClass.hpp)

add_library(treeLib
            src/treeClass.cpp
            src/treeClass.hpp)

add_library(utils
        src/utils.cpp
        src/utils.hpp)
            

add_executable(main app/main.cpp)

target_link_libraries(main PRIVATE utils)
target_link_libraries(treeLib PRIVATE nodeLib)
target_link_libraries(main PRIVATE nodeLib)
target_link_libraries(main PRIVATE treeLib)