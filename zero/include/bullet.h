#ifndef _ZERO_SRC_BULLET_H_
#define _ZERO_SRC_BULLET_H_ 

#include "actor.h"
#include "vector2.h"
#include <string.h>

class Bullet : public Actor
{
   public:
   Bullet(Vector2 position, float direction);
   const char* GetClass();
   float GetX();
   float GetY();
};

#endif
