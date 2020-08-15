add_executable(helloTest helloTester.cpp)

# linux won't work otherwise
target_link_libraries(helloTest PRIVATE Catch2Wrapper HelloWorld)
add_test(NAME Tester COMMAND helloTest -r xml -o Tester.xml)
