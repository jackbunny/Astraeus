#include "actor.h"
#include "kinematics.h"
#include "mocks/mockactor.h"
#include "gtest/gtest.h"

class ActorTest : public ::testing::Test {
   protected:
      static const Vector2 testPosition_;
      static const Vector2 testVelocity_;
      static const float testRotation_;
      MockActor mockActor_;
      ActorTest() : mockActor_( testPosition_,
                              testVelocity_,
                              testRotation_ ) { };
};

const Vector2 ActorTest::testPosition_(0.0f, 0.0f);
const Vector2 ActorTest::testVelocity_(0.0f, 0.0f);

TEST_F( ActorTest, TestGetRotation ) {
   EXPECT_EQ( testRotation_, mockActor_.GetRotation());
}

TEST_F( ActorTest, TestGetPosition ) {
   EXPECT_EQ( testPosition_, mockActor_.GetPosition() );
}

TEST_F( ActorTest, TestRotate ) {
   mockActor_.RotateRightOn();
   mockActor_.Update(1000.0f);
   float r1 = mockActor_.GetRotation();
   EXPECT_LT( testRotation_, r1 );
   mockActor_.RotateOff();
   mockActor_.Update(1000.0f);
   EXPECT_EQ( r1, mockActor_.GetRotation() );
   mockActor_.RotateLeftOn();
   mockActor_.Update(500.0f);
   EXPECT_GT( r1, mockActor_.GetRotation() );
}


