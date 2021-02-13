#include <catch2/catch.hpp>

TEST_CASE("Animal")
{
    constexpr int magicvalue = 42;
    CHECK(40 == magicvalue);
}
