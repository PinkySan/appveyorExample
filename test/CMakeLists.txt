find_package(GTest REQUIRED)
find_package(Threads REQUIRED)
add_executable(helloTest helloTester.cpp)

# fix for linux
target_link_libraries(helloTest PRIVATE ${CMAKE_THREAD_LIBS_INIT} ${GTEST_BOTH_LIBRARIES} HelloWorld)
target_include_directories(helloTest PRIVATE ${GTEST_INCLUDE_DIRS})

add_test(NAME Tester COMMAND helloTest --gtest_output=xml:helloTest.xml)