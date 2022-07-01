cmake_minimum_required(VERSION 3.22)

project(cmake_usage VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)

set(MY_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/include")

add_subdirectory(src)
