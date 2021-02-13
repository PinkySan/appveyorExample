add_executable(helloTest helloTester.cpp)

# linux won't work otherwise
target_link_libraries(helloTest PRIVATE Catch2Wrapper HelloWorld)
add_test(NAME helloTest COMMAND helloTest -r xml -o ${CMAKE_BINARY_DIR}/testresult/Tester.xml)
