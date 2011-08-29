#include "bullet.h"

Bullet::Bullet(Vector2 position, float direction) {
   position_ = position;
   rotation_ = direction;
}

const char* Bullet::GetClass() {
   return "BULLET";
}

