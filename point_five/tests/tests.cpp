#include <gtest\gtest.h>
#include <iostream>

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    int val = RUN_ALL_TESTS();	
	int dummy;
	std::cin >> dummy;
	return val;
}