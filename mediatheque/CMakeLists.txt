cmake_minimum_required(VERSION 2.8)
project(mediatheque)
file(GLOB_RECURSE SRC_FILES src/*.cpp include/*.h)
add_executable(mediatheque ${SRC_FILES})