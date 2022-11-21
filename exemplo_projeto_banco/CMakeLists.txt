cmake_minimum_required(VERSION 3.5)

project(exemplo_projeto_banco LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(exemplo_projeto_banco main.cpp conta.cpp conta.h)
