#include "actor.h"

const float Actor::DEFAULT_MAX_SPEED = 100.0f;
const float Actor::DEFAULT_ROTATION_SPEED = 5.0f;
const char Actor::DEFAULT_ROTATION_DIRECTION = 0;
const float Actor::DEFAULT_ROTATION = 0.0f;
const Vector2 Actor::DEFAULT_POSITION(0.0f, 0.0f);
const Vector2 Actor::DEFAULT_VELOCITY(0.0f, 0.0f);
const float Actor::DEFAULT_SIZE = 10.0f;

Actor::Actor() {
   isAlive_ = true;
   maxSpeed_ = DEFAULT_MAX_SPEED;
   rotationSpeed_ = DEFAULT_ROTATION_SPEED;
   rotationDirection_ = DEFAULT_ROTATION_DIRECTION;
   rotation_ = DEFAULT_ROTATION;
   width_ = DEFAULT_SIZE;
   height_ = DEFAULT_SIZE;
}

void Actor::Die() {
   isAlive_ = false;
}

float Actor::GetHeight() {
   return height_;
}

float Actor::GetWidth() {
   return width_;
}

bool Actor::Intersects(Actor const* actor)
{
   return position_ == actor->GetPosition();
}

bool Actor::IsAlive() {
   return isAlive_;
}

float Actor::GetRotation() {
   return rotation_;
}

Vector2 Actor::GetPosition() const {
   return position_;
}

void Actor::RotateLeftOn() {
   rotationDirection_ = 1;
}

void Actor::RotateRightOn() {
   rotationDirection_ = -1;
}

void Actor::RotateOff() {
   rotationDirection_ = 0;
}

void Actor::Update(float deltaTime) {

   velocity_ = Kinematics::CalculateNewVelocity( rotation_,
                                    velocity_,
                                    acceleration_, 
                                    deltaTime);

   position_ += velocity_;

   rotation_ += rotationSpeed_ * rotationDirection_ * (deltaTime / 1000.0f); 
   if ( rotation_ >= 360 ) {
      rotation_ = rotation_ - 360;
   } else if (rotation_ < 0) {
      rotation_ = 360 + rotation_;
   }
}
