#include "kinematics.h"
#include "gtest/gtest.h"
#include <fstream>

float GetNextVal(std::ifstream* f) {
   std::string val;
   std::getline ( *f, val, ',' );   
   return atof( val.c_str() );
}   

float GetLastValOfLine(std::ifstream* f) {
   std::string val;
   std::getline ( *f, val );
   return atof( val.c_str( ));
}

TEST(KinematicsTest, TestWithAutomatedData)
{
   std::ifstream file ( "kinematicsdata.csv" );
   std::string value;
   if (!file.good()) {
	   FAIL() << "Could not find test data!";
   }
   while ( file.good() ) {
        float rotation = GetNextVal( &file );
        float vx_i = GetNextVal( &file );
        float vy_i = GetNextVal( &file );
        float acceleration = GetNextVal( &file );
        float time = GetNextVal( &file );
        float vx_f = GetNextVal( &file );
        float vy_f = GetLastValOfLine( &file );
        Vector2 result = Kinematics::CalculateNewVelocity( rotation,
                                                Vector2(vx_i, vy_i),
                                                acceleration,
                                                time );
        EXPECT_NEAR( vx_f, result.x, 0.01 );
        EXPECT_NEAR( vy_f, result.y, 0.01 );
   }
}
