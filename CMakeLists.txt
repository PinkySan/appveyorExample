cmake_minimum_required(VERSION 3.5)
project(AppVeyorExample LANGUAGES CXX)

set(CMAKE_DEBUG_POSTFIX _d)

add_library(HelloWorld STATIC include/hello.h src/hello.cpp)
target_link_libraries(HelloWorld PUBLIC include)

install(TARGETS HelloWorld 
    EXPORT helloExport
    ARCHIVE DESTINATION lib
    INCLUDES DESTINATION include)
install(DIRECTORY include DESTINATION .)
install(EXPORT helloExport DESTINATION cmake)