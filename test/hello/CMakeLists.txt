add_executable(helloTest helloTester.cpp)

# linux won't work otherwise
target_link_libraries(helloTest PRIVATE GTestWrapper HelloWorld)
add_test(NAME Tester COMMAND helloTest --gtest_output=xml:helloTest.xml)
