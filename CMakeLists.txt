cmake_minimum_required(VERSION 3.5)
project(AppVeyorExample LANGUAGES CXX)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_set_find_paths()

add_library(HelloWorld STATIC hello.h hello.cpp)
target_include_directories(HelloWorld PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)
set_target_properties(HelloWorld PROPERTIES PUBLIC_HEADER hello.h)

install(TARGETS HelloWorld 
    EXPORT helloExport
    ARCHIVE DESTINATION lib
    PUBLIC_HEADER DESTINATION include
    INCLUDES DESTINATION include)
install(EXPORT helloExport DESTINATION cmake)

enable_testing()
add_subdirectory(test)