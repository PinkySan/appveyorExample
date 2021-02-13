add_executable(animalTest animal.cpp)

target_link_libraries(animalTest PRIVATE Catch2Wrapper)
add_test(NAME animalTest COMMAND animalTest -r xml -o animal.xml)