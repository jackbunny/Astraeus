#include "gtest/gtest.h"

TEST( AsteroidTest, CollisionTest )
{
   Vector2 testPosition(10.0f, 10.0f);
   Vector2 testVelocity(10.0f, 10.0f);
   float testRotation = 0.0f;
   float testRotationSpeed 3.0f;
   char testDirection = 1;
   Asteroid testAsteroid(testPosition,
                         testVelocity,
                         testRotation,
                         testRotationSpeed,
                         testDirection);

   
}
