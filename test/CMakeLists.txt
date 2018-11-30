find_package(GTest REQUIRED)
add_executable(helloTest helloTester.cpp)

# if(UNIX)
#   set(THREADS_PREFER_PTHREAD_FLAG ON)
  find_package(Threads REQUIRED)
  target_link_libraries(helloTest PRIVATE Threads::Threads ${GTEST_BOTH_LIBRARIES} HelloWorld)
# else()
#   target_link_libraries(helloTest PRIVATE ${GTEST_BOTH_LIBRARIES} HelloWorld)
# endif()

target_include_directories(helloTest PRIVATE ${GTEST_INCLUDE_DIRS})

add_test(NAME Tester COMMAND helloTest --gtest_output=xml:helloTest.xml)
