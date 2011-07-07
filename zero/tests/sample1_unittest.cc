#include "sample1.h"
#include "gtest/gtest.h"

TEST(SampleTests, IsOne) {
   EXPECT_EQ(1, GetOne());
}

TEST(SampleTests, IsOneAndThree) {
   EXPECT_EQ(1, GetOne());
   EXPECT_EQ(3, GetThree());
}

TEST(AnotherSet, IsZero) {
   EXPECT_EQ(0, GetZero());
}
