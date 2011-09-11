#include "gtest/gtest.h"
#include "asteroid.h"
#include "bullet.h"
#include "collisionhandler.h"
#include "kinematics.h"

TEST( AsteroidTest, DiesOnBulletCollision )
{
   Vector2 testPosition(10.0f, 10.0f);
   Vector2 testVelocity(10.0f, 10.0f);
   float testRotation = 0.0f;
   float testRotationSpeed = 3.0f;
   RotationDirection rotationDirection = ClockWise;
   float testTime = 0.01f;
   Asteroid testAsteroid(testPosition,
                         testVelocity,
                         testRotation,
                         testRotationSpeed,
                         rotationDirection);

   Bullet testBullet(testPosition, testRotation);
   CollisionHandler ch;
   ch.TestAndHandle(&testAsteroid, &testBullet);
   EXPECT_FALSE(testAsteroid.IsAlive());
}
