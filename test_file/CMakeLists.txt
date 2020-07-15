cmake_minimum_required(VERSION 2.8.4)
project(test)
add_compile_options(-std=c++11)
# include_directories(../include/
# src/
# )
include_directories(
 src/
 ${PROJECT_SOURCE_DIR}/include
 ${PROJECT_SOURCE_DIR} /src
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
add_executable(demo main.cpp)