cmake_minimum_required(VERSION 3.5)

project(simulado_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(simulado_2 main.cpp)

install(TARGETS simulado_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
