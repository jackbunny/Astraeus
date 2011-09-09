#pragma once

class CollisionHandler
{
   public:
   CollisionHandler();
   void TestAndHandle( Actor* actor1, Actor* actor2 );
};
