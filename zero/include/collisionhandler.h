#pragma once
#include "actor.h"

class CollisionHandler {
   public:
   void TestAndHandle( Actor* actor1, Actor* actor2 );
};
