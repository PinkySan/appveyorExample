#include <gtest/gtest.h>
#include <hello.h>

TEST(first, success)
{
    EXPECT_EQ(returnValue(),42);
}