find_package(Catch2 REQUIRED)
add_library(Catch2Wrapper INTERFACE)
target_link_libraries(Catch2Wrapper INTERFACE Catch2::Catch2)
target_compile_definitions(Catch2Wrapper INTERFACE CATCH_CONFIG_MAIN)

add_subdirectory(hello)
add_subdirectory(animal)
add_subdirectory(clang-errors)