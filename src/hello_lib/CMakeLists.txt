file(GLOB_RECURSE HELLO_LIB_SRC_FILES
        CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/*.hpp")

add_library(hello_lib STATIC "${HELLO_LIB_SRC_FILES}")
target_include_directories(hello_lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include/")