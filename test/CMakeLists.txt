find_package(GTest REQUIRED)
find_package(Threads REQUIRED)

add_library(GTestWrapper main.cpp)
target_link_libraries(GTestWrapper PUBLIC ${GTEST_LIBRARIES} Threads::Threads )
target_include_directories(GTestWrapper PUBLIC ${GTEST_INCLUDE_DIRS})

add_subdirectory(hello)
add_subdirectory(animal)