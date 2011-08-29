#include "actor.h"
#include "kinematics.h"
#include "mocks/mockactor.h"
#include "gtest/gtest.h"

class ActorTest : public ::testing::Test {
   protected:
      MockActor mockActor_;
};

TEST_F( ActorTest, TestRotate ) {
   float r0 = mockActor_.GetRotation();
   mockActor_.RotateLeftOn();
   mockActor_.Update(1000.0f);
   float r1 = mockActor_.GetRotation();
   EXPECT_LT( r0, r1 );
   mockActor_.RotateOff();
   mockActor_.Update(1000.0f);
   EXPECT_EQ( r1, mockActor_.GetRotation() );
   mockActor_.RotateRightOn();
   mockActor_.Update(500.0f);
   EXPECT_GT( r1, mockActor_.GetRotation() );
}

TEST_F(ActorTest, CanDetectCollision) {
   MockActor collideActor;
   EXPECT_TRUE(mockActor_.Intersects(&collideActor));
}

TEST_F(ActorTest, CanDetectNoCollision) {
   MockActor collideActor(Vector2(20.0f, 20.0f));
   EXPECT_FALSE(mockActor_.Intersects(&collideActor));
}

TEST_F(ActorTest, RotationIsInRange) {
   float initialRotation = mockActor_.GetRotation();
   float rotation = initialRotation + 1;
   bool pastZero = 0;
   mockActor_.RotateRightOn();
   while (!pastZero && (rotation > initialRotation)) {
      ASSERT_GE(rotation, 0);
      ASSERT_LT(rotation, 360);
      mockActor_.Update(1000.0f);
      float lastRotation = rotation;
      rotation = mockActor_.GetRotation();
      if ( rotation < lastRotation ) {
         pastZero = 1;
      }
   }
}

TEST_F(ActorTest, RotationOffWorks) {
   float firstRotation = mockActor_.GetRotation();
   mockActor_.RotateLeftOn();
   mockActor_.Update(1000.0f);
   float secondRotation = mockActor_.GetRotation();
   mockActor_.RotateOff(); mockActor_.Update(1000.0f); float thirdRotation = mockActor_.GetRotation();

   EXPECT_NE(firstRotation, secondRotation);
   EXPECT_EQ(secondRotation, thirdRotation);
}

TEST_F(ActorTest, RotationScalesWithTime) {
   float firstRotation = mockActor_.GetRotation();
   mockActor_.RotateLeftOn();
   mockActor_.Update(1000.0f);
   float secondRotation = mockActor_.GetRotation();
   mockActor_.Update(2000.0f);
   float thirdRotation = mockActor_.GetRotation();

   EXPECT_LT(secondRotation - firstRotation, thirdRotation - secondRotation);
}

