add_executable(animal animal.cpp)

# linux won't work otherwise
target_link_libraries(animal PRIVATE GTestWrapper)
add_test(NAME animalTest COMMAND animal --gtest_output=xml:animal.xml)