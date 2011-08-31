cmake_minimum_required (VERSION 2.6)
project (Zero)

set(EXECUTABLE_OUTPUT_PATH bin)
set(LIBRARY_OUTPUT_PATH lib)

enable_testing()

include_directories(include)

add_subdirectory(src/)
add_subdirectory(tests/)
