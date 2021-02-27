#include <catch2Wrapper.h>
#include <hello.h>

TEST_CASE("success")
{
    CHECK(returnValue() == 42);
}

TEST_CASE("failure", "[!mayfail]")
{
    CHECK(returnValue() == 17);
}