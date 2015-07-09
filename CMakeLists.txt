cmake_minimum_required(VERSION 2.8)
project(Source2Gen)

set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)

file(GLOB_RECURSE Source2Gen_SOURCES "Source2Gen/*.cpp")
file(GLOB_RECURSE Source2Gen_HEADERS "Source2Gen/*.hpp")

LINK_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/bin)

include_directories("{CMAKE_CURRENT_SOURCE_DIR}/Source2Gen")

add_definitions(-DSOURCE2_OUTPUT="${LIBRARY_OUTPUT_PATH}")

add_library(Source2Gen SHARED ${Source2Gen_HEADERS} ${Source2Gen_SOURCES})
