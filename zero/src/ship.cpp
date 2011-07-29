#include "ship.h"

Ship::Ship(float x, float y, float acceleration, float maxSpeed,
           float rotationSpeed) {
   x_ = x;
   y_ = y;
   vx_ = 0;
   vy_ = 0;

   acceleration_ = acceleration;
   maxSpeed_ = maxSpeed;
   rotationSpeed_ = rotationSpeed;
   thrustIsOn_ = 0;
   
   rotation_ = 0;
   rotationDirection_ = 0;
}

void Ship::Fire(ISceneManager* sceneManager) {
   Bullet bullet(x_, y_);
   sceneManager->Add(bullet);
}

float Ship::GetRotation() {
   return rotation_;
}

float Ship::GetX() {
   return x_;
}

float Ship::GetY() {
   return y_;
}

void Ship::RotateLeftOn() {
   rotationDirection_ = 1;
}

void Ship::RotateRightOn() {
   rotationDirection_ = -1;
}

void Ship::RotateOff() {
   rotationDirection_ = 0;
}

void Ship::ThrustOn() {
   thrustIsOn_ = 1;
}

void Ship::ThrustOff() {
   thrustIsOn_ = 0;
}

void Ship::Update(float deltaTime) {
   float radians = rotation_ * (M_PI / 180.0f);
   float seconds = deltaTime / 1000.0f;

   if ( thrustIsOn_ ) {
      vx_ += acceleration_ * cosf(radians) * seconds;
      vy_ += acceleration_ * sinf(radians) * seconds;
   }

   x_ += vx_ * seconds; 
   y_ += vy_ * seconds; 

   rotation_ += rotationSpeed_ * rotationDirection_ * seconds;
   if ( rotation_ >= 360 ) {
      rotation_ = rotation_ - 360;
   } else if (rotation_ < 0) {
      rotation_ = 360 + rotation_;
   }
}
