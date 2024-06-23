cmake_minimum_required(VERSION 3.15)
project(aaa)

set(CMAKE_CXX_STANDARD 17)

include_directories(header)

add_executable(${PROJECT_NAME} main.cpp)

if(NOT STATIC_LIBRARIES_FOUND AND NOT WIN32)
    add_executable(${PROJECT_NAME} WIN32 main.cpp)
    target_link_libraries(${PROJECT_NAME} PRIVATE comctl32)
endif()