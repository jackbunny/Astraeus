#ifndef _ZERO_SRC_ACTOR_H_
#define _ZERO_SRC_ACTOR_H_

#include "kinematics.h"
#include "vector2.h"
#include <math.h>

class Actor {
   static const float DEFAULT_MAX_SPEED;
   static const float DEFAULT_ROTATION_SPEED;
   static const char DEFAULT_ROTATION_DIRECTION;
   static const float DEFAULT_ROTATION;
   static const Vector2 DEFAULT_POSITION;
   static const Vector2 DEFAULT_VELOCITY;
   static const float DEFAULT_SIZE;

   public:
   Actor();
   void Die();
   bool Intersects(const Actor* actor);
   bool IsAlive();
   Vector2 GetPosition() const;
   float GetRotation();
   float GetHeight();
   float GetWidth();
   void RotateLeftOn();
   void RotateRightOn();
   void RotateOff();
   void Update(float deltaTime);

   protected:
   bool isAlive_;
   Vector2 position_;
   Vector2 velocity_;
   float acceleration_;
   float maxSpeed_;
   float rotation_;
   char rotationDirection_;
   float rotationSpeed_;
   float width_;
   float height_;
};

#endif //END _ZERO_SRC_ACTOR_H_
