add_executable(animal animal.cpp)

target_link_libraries(animal PRIVATE Catch2Wrapper)
add_test(NAME animalTest COMMAND animal -r xml -o animal.xml)