#pragma once
#include "actor.h"

typedef const float(*getCoordinate)(Actor*);

class CollisionHandler {
   public:
   void TestAndHandle( Actor* actor1, Actor* actor2 );
   private:
   Actor* actor1_;
   Actor* actor2_;
   const bool AxisIntersects ( getCoordinate getNearCoordinate, getCoordinate getFarCoordinate );
                       
   static const float GetRightX( Actor* actor );
   static const float GetLeftX( Actor* actor );
   static const float GetTopY( Actor* actor ); 
   static const float GetBottomY( Actor* actor );
};
