#ifndef _ZERO_SRC_ASTEROID_H_
#define _ZERO_SRC_ASTEROID_H_

#include "actor.h"

class Asteroid : public Actor
{
   public:
      Asteroid( Vector2 position,
                    Vector2 velocity,
                    float rotation,
                    float rotationSpeed,
                    RotationDirection direction );

};

#endif //_ZERO_SRC_ASTEROID_H_
