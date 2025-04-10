cmake_minimum_required(VERSION 3.10)
project(pda)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_library(pda_stack STATIC src/stack.cpp)

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} pda_stack)
