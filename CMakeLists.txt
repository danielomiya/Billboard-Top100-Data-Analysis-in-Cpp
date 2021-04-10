cmake_minimum_required(VERSION 3.12)

project(billboard_top100 
        VERSION 0.0.1
        LANGUAGES CXX)

file(GLOB HEADERS CONFIGURE_DEPENDS src/*.hpp)
file(GLOB SOURCES CONFIGURE_DEPENDS src/*.cpp)

add_library(treeLib ${SOURCES} ${HEADERS})
            
add_executable(main app/main.cpp)

target_link_libraries(main PRIVATE treeLib)
