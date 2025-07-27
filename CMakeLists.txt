# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)

project(r-parse)

add_executable(r-parse
    src/main.cpp
)

target_include_directories(r-parse PUBLIC include)
