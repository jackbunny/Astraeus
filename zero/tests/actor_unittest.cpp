#include "actor.h"
#include "kinematics.h"
#include "mockactor.h"
#include "gtest/gtest.h"

class ActorTest : public ::testing::Test {
   protected:
      ActorTest : mockActor_( testPosition_,
                              testVelocity_,
                              testRotation_ );
      static const Vector2 testPosition_;
      static const Vector2 testVelocity_; 
      static const float testRotation_;
      MockActor mockActor_;
}

const float ActorTest::testPosition_(0.0f, 0.0f);
const float ActorTest::testVelocity_(0.0f, 0.0f);

TEST_F( ActorTest, TestGetRotation ) {
   EXPECT_EQ( testRotation_, mockActor_.GetRotation());
}

TEST_F( ActorTest, TestGetPosition ) {
   EXPECT_EQ( testPosition_, mockActor_.GetPosition() );
}

TEST_F( ActorTest, Test

