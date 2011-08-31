# CMake generated Testfile for 
# Source directory: /home/jackbunny/code/Astraeus/zero/tests
# Build directory: /home/jackbunny/code/Astraeus/zero/build/tests
# 
# This file includes the relevent testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(actor_unittest "bin/actor_unittest")
ADD_TEST(bullet_unittest "bin/bullet_unittest")
ADD_TEST(kinematics_unittest "bin/kinematics_unittest")
ADD_TEST(ship_unittest "bin/ship_unittest")
SUBDIRS(lib/gtest)
SUBDIRS(mocks)
