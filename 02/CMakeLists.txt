cmake_minimum_required(VERSION 3.15)

if(${CMAKE_VERSION} VERSION_LESS 3.8)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

project(Aaa)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD_REQUIRED ON)

if(NOT WIN32)
    add_executable(${PROJECT_NAME} WIN32 main.cpp)
    target_link_libraries(${PROJECT_NAME} PRIVATE comctl32)
endif()

add_executable(${PROJECT_NAME} main.cpp)