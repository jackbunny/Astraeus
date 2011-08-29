#include "actor.h"

class MockActor : public Actor {
   public:
      MockActor() : Actor() { }
      MockActor(Vector2 position) {
         position_ = position;
      }
};
