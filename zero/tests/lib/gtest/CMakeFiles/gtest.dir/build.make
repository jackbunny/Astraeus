# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/cmake-gui

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jackbunny/code/Astraeus/zero

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jackbunny/code/Astraeus/zero

# Include any dependencies generated for this target.
include tests/lib/gtest/CMakeFiles/gtest.dir/depend.make

# Include the progress variables for this target.
include tests/lib/gtest/CMakeFiles/gtest.dir/progress.make

# Include the compile flags for this target's objects.
include tests/lib/gtest/CMakeFiles/gtest.dir/flags.make

tests/lib/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o: tests/lib/gtest/CMakeFiles/gtest.dir/flags.make
tests/lib/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o: tests/lib/gtest/src/gtest-all.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/jackbunny/code/Astraeus/zero/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/lib/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o"
	cd /home/jackbunny/code/Astraeus/zero/tests/lib/gtest && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS)  -Wall -Wshadow -DGTEST_HAS_PTHREAD=1 -fexceptions -Wextra -o CMakeFiles/gtest.dir/src/gtest-all.cc.o -c /home/jackbunny/code/Astraeus/zero/tests/lib/gtest/src/gtest-all.cc

tests/lib/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest.dir/src/gtest-all.cc.i"
	cd /home/jackbunny/code/Astraeus/zero/tests/lib/gtest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -Wall -Wshadow -DGTEST_HAS_PTHREAD=1 -fexceptions -Wextra -E /home/jackbunny/code/Astraeus/zero/tests/lib/gtest/src/gtest-all.cc > CMakeFiles/gtest.dir/src/gtest-all.cc.i

tests/lib/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest.dir/src/gtest-all.cc.s"
	cd /home/jackbunny/code/Astraeus/zero/tests/lib/gtest && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS)  -Wall -Wshadow -DGTEST_HAS_PTHREAD=1 -fexceptions -Wextra -S /home/jackbunny/code/Astraeus/zero/tests/lib/gtest/src/gtest-all.cc -o CMakeFiles/gtest.dir/src/gtest-all.cc.s

tests/lib/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.requires:
.PHONY : tests/lib/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.requires

tests/lib/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.provides: tests/lib/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.requires
	$(MAKE) -f tests/lib/gtest/CMakeFiles/gtest.dir/build.make tests/lib/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.provides.build
.PHONY : tests/lib/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.provides

tests/lib/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.provides.build: tests/lib/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
.PHONY : tests/lib/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.provides.build

# Object files for target gtest
gtest_OBJECTS = \
"CMakeFiles/gtest.dir/src/gtest-all.cc.o"

# External object files for target gtest
gtest_EXTERNAL_OBJECTS =

tests/lib/gtest/libgtest.a: tests/lib/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
tests/lib/gtest/libgtest.a: tests/lib/gtest/CMakeFiles/gtest.dir/build.make
tests/lib/gtest/libgtest.a: tests/lib/gtest/CMakeFiles/gtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libgtest.a"
	cd /home/jackbunny/code/Astraeus/zero/tests/lib/gtest && $(CMAKE_COMMAND) -P CMakeFiles/gtest.dir/cmake_clean_target.cmake
	cd /home/jackbunny/code/Astraeus/zero/tests/lib/gtest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gtest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/lib/gtest/CMakeFiles/gtest.dir/build: tests/lib/gtest/libgtest.a
.PHONY : tests/lib/gtest/CMakeFiles/gtest.dir/build

tests/lib/gtest/CMakeFiles/gtest.dir/requires: tests/lib/gtest/CMakeFiles/gtest.dir/src/gtest-all.cc.o.requires
.PHONY : tests/lib/gtest/CMakeFiles/gtest.dir/requires

tests/lib/gtest/CMakeFiles/gtest.dir/clean:
	cd /home/jackbunny/code/Astraeus/zero/tests/lib/gtest && $(CMAKE_COMMAND) -P CMakeFiles/gtest.dir/cmake_clean.cmake
.PHONY : tests/lib/gtest/CMakeFiles/gtest.dir/clean

tests/lib/gtest/CMakeFiles/gtest.dir/depend:
	cd /home/jackbunny/code/Astraeus/zero && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jackbunny/code/Astraeus/zero /home/jackbunny/code/Astraeus/zero/tests/lib/gtest /home/jackbunny/code/Astraeus/zero /home/jackbunny/code/Astraeus/zero/tests/lib/gtest /home/jackbunny/code/Astraeus/zero/tests/lib/gtest/CMakeFiles/gtest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/lib/gtest/CMakeFiles/gtest.dir/depend

