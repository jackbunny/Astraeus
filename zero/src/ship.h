#ifndef ZERO_SRC_SHIP_H_ 
#define ZERO_SRC_SHIP_H_

#define _USE_MATH_DEFINES

#include "actor.h"
#include "bullet.h"
#include "iscenemanager.h"
#include "vector2.h"
#include <math.h>
#include <iostream>

class Ship : public Actor {

   static const float THRUST;

public:
   Ship(Vector2 position);
   void Fire(ISceneManager* sceneManager);
   void ThrustOn();
   void ThrustOff();
};

#endif //ZERO_SRC_SHIP_H_
