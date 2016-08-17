cmake_minimum_required(VERSION 2.8)
project(Source2Gen)

set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /Zc:threadSafeInit-")

file(GLOB_RECURSE Source2Gen_SOURCES "Source2Gen/*.cpp" "Source2Gen/shared/*.cpp")
file(GLOB_RECURSE Source2Gen_HEADERS "Source2Gen/*.hpp" "Source2Gen/shared/*.hpp")

LINK_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/bin)

include_directories("Source2Gen" "Source2Gen/shared")

add_definitions(-DSOURCE2_OUTPUT="${LIBRARY_OUTPUT_PATH}")

add_library(Source2Gen SHARED ${Source2Gen_HEADERS} ${Source2Gen_SOURCES})
