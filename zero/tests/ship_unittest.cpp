#include "ship.h"
#include "mocks/mockscenemanager.h"
#include "gtest/gtest.h"

class ShipTest : public ::testing::Test {
   protected:
      ShipTest() : ship_( testPosition_ ) { }
      
      virtual void SetUp() {
         elapsedMilliseconds_ = 1000.0f;
      }

      static const Vector2 testPosition_; 
      float elapsedMilliseconds_;
      Ship ship_;
};

const Vector2 ShipTest::testPosition_( 100.0f, 100.0f );

float GetAbsolute(float val) {
   if ( val < 0 ) {
      return val * -1;
   } else {
      return val;
   }
}

TEST_F(ShipTest, ConstructorWorks) {
   EXPECT_EQ(ShipTest::testPosition_, ship_.GetPosition());
   EXPECT_EQ(ShipTest::testPosition_, ship_.GetPosition());
}

TEST_F(ShipTest, ThrustOnMovesShip) {
   Vector2 initPosition = ship_.GetPosition();
   ship_.ThrustOn();
   ship_.Update(elapsedMilliseconds_);
   EXPECT_NE( ship_.GetPosition() , initPosition);
}

TEST_F(ShipTest, ThrustOffWorks) {
   Vector2 initPosition = ship_.GetPosition();
   ship_.ThrustOn();
   ship_.Update(elapsedMilliseconds_);
   Vector2 secondPosition = ship_.GetPosition();
   Vector2 difference = secondPosition - initPosition;
   ship_.ThrustOff();
   ship_.Update(elapsedMilliseconds_);
   EXPECT_EQ(ship_.GetPosition() - secondPosition, difference);
}

TEST_F(ShipTest, TestFireWeapon) {
   MockSceneManager sceneManager;

   ship_.Fire(&sceneManager);
   EXPECT_TRUE(sceneManager.ObjectWasAdded());
   EXPECT_STREQ(((Bullet*)sceneManager.GetLastObjectAdded())->GetClass(), "BULLET");
}
