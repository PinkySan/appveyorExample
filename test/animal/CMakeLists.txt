add_executable(animal animal.cpp)

# linux won't work otherwise
target_link_libraries(animal PRIVATE Threads::Threads ${GTEST_BOTH_LIBRARIES})
target_include_directories(animal PRIVATE ${GTEST_INCLUDE_DIRS})
add_test(NAME animalTest COMMAND animal --gtest_output=xml:animal.xml)