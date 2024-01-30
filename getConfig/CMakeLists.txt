cmake_minimum_required(VERSION 3.10)

add_library(getConfig myConfig.cpp myConfig.h)

target_include_directories(getConfig PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})