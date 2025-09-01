add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/hello_lib/")

add_executable(cpp_cmake_template main.cpp)
target_link_libraries(cpp_cmake_template PRIVATE hello_lib)