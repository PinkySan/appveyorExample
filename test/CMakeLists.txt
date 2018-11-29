find_package(GTest REQUIRED)
find_package(Threads)
add_executable(helloTest helloTester.cpp)

target_link_libraries(helloTest PRIVATE ${GTEST_BOTH_LIBRARIES} HelloWorld Threads::Threads)
target_include_directories(helloTest PRIVATE ${GTEST_INCLUDE_DIRS})

add_test(NAME Tester COMMAND helloTest --gtest_output=xml:helloTest.xml)