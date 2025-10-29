# CMake config
cmake_minimum_required(VERSION 3.10)
project(matrixfx-boot LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Source
add_executable(matrixfx-boot src/main.cpp)

# Optional install target
install(TARGETS matrixfx-boot DESTINATION bin)
