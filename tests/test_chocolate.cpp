#include <gtest/gtest.h>
#include "../include/chocolate.h"

TEST(ChocolateTest, BasicCases)
{
    EXPECT_EQ(minBreaks(2, 1), 1);
    EXPECT_EQ(minBreaks(3, 1), 2);
    EXPECT_EQ(minBreaks(2, 2), 3);
    EXPECT_EQ(minBreaks(3, 3), 8);
}

TEST(ChocolateTest, EdgeCases)
{
    EXPECT_EQ(minBreaks(0, 0), 0);
    EXPECT_EQ(minBreaks(0, 5), 0);
    EXPECT_EQ(minBreaks(5, 0), 0);
    EXPECT_EQ(minBreaks(1, 1), 0);
}

TEST(ChocolateTest, LargeValues)
{
    EXPECT_EQ(minBreaks(100, 1), 99);
    EXPECT_EQ(minBreaks(1, 100), 99);
    EXPECT_EQ(minBreaks(100, 100), 9999);
}

TEST(ChocolateTest, Symmetry)
{
    EXPECT_EQ(minBreaks(5, 7), minBreaks(7, 5));
    EXPECT_EQ(minBreaks(10, 10), minBreaks(10, 10));
}

TEST(ChocolateTest, RandomValues)
{
    EXPECT_EQ(minBreaks(4, 5), 19);
    EXPECT_EQ(minBreaks(6, 2), 11);
    EXPECT_EQ(minBreaks(7, 3), 20);
}