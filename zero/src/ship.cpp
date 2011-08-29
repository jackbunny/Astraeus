#include "ship.h"

const float Ship::THRUST = 10.0f;

Ship::Ship(Vector2 position) {
   position_ = position;
}

void Ship::Fire(ISceneManager* sceneManager) {
   Bullet bullet(position_, 0.0f);
   sceneManager->Add(bullet);
}

void Ship::ThrustOn() {
   acceleration_ = THRUST;
}

void Ship::ThrustOff() {
   acceleration_ = 0.0f;
}

