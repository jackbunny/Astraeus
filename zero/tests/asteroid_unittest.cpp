#include "gtest/gtest.h"
#include "asteroid.h"
#include "bullet.h"
#include "collisionhandler.h"
#include "kinematics.h"

class AsteroidTest : public ::testing::Test {
   protected:
      static const Vector2 testPosition_;
      static const Vector2 testVelocity_;
      static const float testRotation_;
      static const float testRotationSpeed_;
      static const RotationDirection rotationDirection_;
      Asteroid testAsteroid_;

      CollisionHandler ch_;
   public:
      AsteroidTest() : testAsteroid_(testPosition_,
                                     testVelocity_,
                                     testRotation_,
                                     testRotationSpeed_,
                                     rotationDirection_) {}
};

const Vector2 AsteroidTest::testPosition_(10.0f, 10.0f);
const Vector2 AsteroidTest::testVelocity_(10.0f, 10.0f);
const float AsteroidTest::testRotation_ = 0.0f;
const float AsteroidTest::testRotationSpeed_ = 3.0f;
const RotationDirection AsteroidTest::rotationDirection_ = ClockWise;

TEST_F( AsteroidTest, DiesOnBulletCollision )
{
   Bullet testBullet( Vector2( 11.0f, 11.0f ), testRotation_);
   ch_.TestAndHandle(&testAsteroid_, &testBullet);
   EXPECT_FALSE(testAsteroid_.IsAlive());
}

TEST_F( AsteroidTest, LivesWithNoCollision )
{
   Bullet testBullet( Vector2(100.0f, 100.0f), 0.0f );
   ch_.TestAndHandle(&testAsteroid_, &testBullet);
   EXPECT_TRUE(testAsteroid_.IsAlive());
}
