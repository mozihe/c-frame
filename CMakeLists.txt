cmake_minimum_required(VERSION 3.10)

project(example)   #改成你的项目名

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(OpenCV REQUIRED)

add_subdirectory(getConfig)

file(GLOB SOURCES_DIR "src/*.cpp")

include_directories(${PROJECT_SOURCE_DIR}/include/)

add_executable(example main.cpp ${SOURCES_DIR})  #改成你的项目名

target_link_libraries(example ${OpenCV_LIBS} getConfig)  #改成你的项目名 并且添加你的动态链接库