cmake_minimum_required(VERSION 2.8)
project(Source2Dumper)

set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)

file(GLOB_RECURSE Source2Dumper_SOURCES "Source2Dumper/*.cpp")
file(GLOB_RECURSE Source2Dumper_HEADERS "Source2Dumper/*.hpp")

LINK_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/bin)

include_directories("{CMAKE_CURRENT_SOURCE_DIR}/Source2Dumper")

add_library(Source2Dumper SHARED ${Source2Dumper_HEADERS} ${Source2Dumper_SOURCES})
