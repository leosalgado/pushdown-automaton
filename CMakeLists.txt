cmake_minimum_required(VERSION 3.10)
project(pda)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(include)

add_library(pda_stack STATIC src/stack.cpp)

add_library(lang1 STATIC src/lang/lang1.cpp)

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} pda_stack lang1)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/include)
