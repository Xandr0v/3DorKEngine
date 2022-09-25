cmake_minimum_required(VERSION 3.24)
project(game)
set(CMAKE_CXX_STANDARD 14)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
add_executable(game application.cpp)

target_link_libraries(game ${CMAKE_BINARY_DIR}/lib3DorkEngine.dll)
target_include_directories(game PRIVATE 3DorkEngine/include)
