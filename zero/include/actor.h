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

   public:
   Actor();
   bool Intersects(const Actor* actor);
   bool IsAlive();
   Vector2 GetPosition() const;
   float GetRotation();
   void RotateLeftOn();
   void RotateRightOn();
   void RotateOff();
   void Update(float deltaTime);

   protected:
   Vector2 position_;
   float rotation_;
   char rotationDirection_;
   Vector2 velocity_;
   float acceleration_;
   float maxSpeed_;
   float rotationSpeed_;
};

#endif //END _ZERO_SRC_ACTOR_H_
