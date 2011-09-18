#include "collisionhandler.h"

#include <iostream>

void CollisionHandler::TestAndHandle( Actor* actor1,
                                      Actor* actor2 ) {   
   actor1_ = actor1;
   actor2_ = actor2;

   if ( AxisIntersects( &GetRightX, &GetLeftX )
     && AxisIntersects( &GetTopY, &GetBottomY ) ) {
      actor1->Die();
      actor2->Die();
   }
}

const bool CollisionHandler::AxisIntersects ( getCoordinate getFarCoordinate, getCoordinate getNearCoordinate ) {
   return
      ( (*getFarCoordinate)(actor1_) - (*getNearCoordinate)(actor2_) >= 0 )
      == ( (*getNearCoordinate)(actor1_) - (*getFarCoordinate)(actor2_) <= 0 );
}


const float CollisionHandler::GetRightX( Actor* actor) {
   return ( actor->GetPosition().x + actor->GetWidth() );
}

const float CollisionHandler::GetLeftX( Actor* actor) {
   return ( actor->GetPosition().x );
}

const float CollisionHandler::GetTopY( Actor* actor) {
   return ( actor->GetPosition().y + actor->GetHeight() );
}

const float CollisionHandler::GetBottomY( Actor* actor) {
   return ( actor->GetPosition().y );
}
