#include <gtest/gtest.h>

TEST(first, success)
{
    EXPECT_EQ(1,1);
}

TEST(first, fail)
{
    EXPECT_EQ(1,0);
}