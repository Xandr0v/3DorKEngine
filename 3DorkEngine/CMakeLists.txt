cmake_minimum_required(VERSION 3.24)
project(3DorkEngine)

set(CMAKE_CXX_STANDARD 14)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(GRAPHICS_LIBS "${PROJECT_SOURCE_DIR}/dependencies")


add_library(3DorkEngine SHARED libmain.cpp libmain.h functions.cpp functions.h pch.h)

find_package(OpenGL REQUIRED)

target_link_directories(3DorkEngine PUBLIC
        ${GRAPHICS_LIBS}/GLFW/lib-mingw-w64/
        ${GRAPHICS_LIBS}/GLEW/lib/Release/x64/
)

target_link_libraries(3DorkEngine PUBLIC
        libglfw3.a
        glew32s.lib
        OpenGL32.lib
        )


target_include_directories(3DorkEngine PUBLIC
        ${GRAPHICS_LIBS}/GLEW/include
        ${GRAPHICS_LIBS}/GLFW/include
        )


