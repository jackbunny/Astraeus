#ifndef ZERO_SRC_SHIP_H_ 
#define ZERO_SRC_SHIP_H_

#define _USE_MATH_DEFINES

#include "iscenemanager.h"
#include "bullet.h"
#include <math.h>
#include <iostream>

class Ship {
public:
   Ship(float x, float y, float acceleration, float maxSpeed,
        float rotationSpeed);
   void Fire(ISceneManager* sceneManager);
   float GetRotation();
   float GetX();
   float GetY();
   void RotateLeftOn();
   void RotateRightOn();
   void RotateOff();
   void ThrustOn();
   void ThrustOff();
   void Update(float deltaTime);

private:
   float x_;
   float y_;
   bool thrustIsOn_;
   float acceleration_;
   float maxSpeed_;
   float rotation_; 
   float rotationDirection_;
   float rotationSpeed_;
   float vx_;
   float vy_;
};

#endif //ZERO_SRC_SHIP_H_
