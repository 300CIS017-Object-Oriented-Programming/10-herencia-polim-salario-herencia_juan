cmake_minimum_required(VERSION 3.19)
project(PayrollSystem)

include(CTest)
enable_testing()

set(CMAKE_CXX_STANDARD 17)

add_executable(PayrollSystem src/DesarrolladorJunior.cpp  src/DesarrolladorJunior.h  src/DesarrolladorSenior.cpp  src/DesarrolladorSenior.h  src/Empleado.cpp  src/Empleado.h  src/LiderTecnico.cpp  src/LiderTecnico.h  src/Tester.cpp  src/Tester.h src/main.cpp)

set(CMAKE_CXX_COMPILER "/usr/bin/clang++")