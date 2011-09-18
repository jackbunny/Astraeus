#include "asteroid.h"

Asteroid::Asteroid( Vector2 position,
                    Vector2 velocity,
                    float rotation,
                    float rotationSpeed,
                    RotationDirection direction ) {
   position_ = position;
   velocity_ = velocity;
   rotation_ = rotation;
   rotationSpeed_ = rotationSpeed;
   rotationDirection_ = direction;

}
