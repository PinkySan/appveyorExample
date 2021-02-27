#include <catch2Wrapper.h>

TEST_CASE("Animal")
{
    constexpr int magicvalue = 42;
    CHECK(40 == magicvalue);
}
