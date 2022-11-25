cmake_minimum_required(VERSION 3.5)

project(exemplo_classe_aluno LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(exemplo_classe_aluno main.cpp aluno.h aluno.cpp)
