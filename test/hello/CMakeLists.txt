add_executable(helloTest helloTester.cpp)

# linux won't work otherwise
target_link_libraries(helloTest PRIVATE Threads::Threads ${GTEST_BOTH_LIBRARIES} HelloWorld)
target_include_directories(helloTest PRIVATE ${GTEST_INCLUDE_DIRS})
add_test(NAME Tester COMMAND helloTest --gtest_output=xml:helloTest.xml)
