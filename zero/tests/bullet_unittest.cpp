#include "bullet.h"
#include "gtest/gtest.h"

class BulletTest : public ::testing::Test {
   protected:
   BulletTest() : bullet_(testPosition_, direction_) {}

   static const Vector2 testPosition_;
   static const float direction_;
   static const float speed_;
   Bullet bullet_;
};

const Vector2 BulletTest::testPosition_(200.0f, 100.0f);
const float BulletTest::direction_ = 100.0f;
const float BulletTest::speed_ = 100.0f;

TEST_F(BulletTest, ConstructorTest) {
   EXPECT_EQ(bullet_.GetPosition(), BulletTest::testPosition_);
}
