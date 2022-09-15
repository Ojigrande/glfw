cmake_minimum_required(VERSION 3.20)

project(fftest)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release")
endif()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY    "${CMAKE_SOURCE_DIR}/bin")

list(APPEND CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR})
list(APPEND CMAKE_PREFIX_PATH ${CMAKE_BINARY_DIR})

set(Boost_USE_STATIC_LIBS        ON) # only find static libs
set(Boost_USE_MULTITHREADED      ON)
set(Boost_USE_STATIC_RUNTIME    OFF)

find_package(glad REQUIRED QUIET)
find_package(GLEW REQUIRED QUIET)
find_package(glfw3 REQUIRED)
find_package(ffmpeg REQUIRED QUIET)
find_package(Boost REQUIRED QUIET COMPONENTS system)

add_subdirectory(examples)
