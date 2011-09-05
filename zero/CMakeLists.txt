cmake_minimum_required (VERSION 2.6)
project (Zero)

set(EXECUTABLE_OUTPUT_PATH bin)
set(LIBRARY_OUTPUT_PATH lib)

enable_testing()

include_directories(include)

add_custom_target(detailed_test)
macro(run_test test_target)
   add_custom_target(${test_target}_runtest
         COMMAND ${test_target}
         DEPENDS ${test_target}
         WORKING_DIRECTORY "${CMAKE_BINARY_DIR}")
   add_dependencies(detailed_test ${test_target}_runtest)
endmacro()

add_subdirectory(src/)
add_subdirectory(tests/)
