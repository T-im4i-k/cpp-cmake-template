cmake_minimum_required(VERSION 3.28)

project(cpp_cmake_template
        DESCRIPTION "A minimal and modern C++ project template using CMake."
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/src/")

enable_testing()
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/test/")