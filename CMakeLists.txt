cmake_minimum_required(VERSION 3.12)
project(Generador_Combinaciones)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(combinaciones
  src/main.cpp
  src/aux.cpp
  src/combinatoria.cpp
)
