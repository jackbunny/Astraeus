#include "kinematics.h"

Vector2 Kinematics::CalculateNewVelocity( float rotation,
                       Vector2 velocity,
                       float acceleration,
                       float timeInMilliseconds)
{
   float radians = rotation * (M_PI / 180.0F);
   float seconds = timeInMilliseconds / 1000.0f;

   velocity.x += acceleration * cosf(radians) * seconds;
   velocity.y += acceleration * sinf(radians) * seconds;

   return velocity; 
}
