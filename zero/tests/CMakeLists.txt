add_subdirectory(lib/gtest)
add_subdirectory(mocks)

include_directories(lib/gtest/include mocks)
set (links gamelib mock gtest gtest_main)
set(dir ${EXECUTABLE_OUTPUT_PATH}) 

SET(tests actor_unittest asteroid_unittest bullet_unittest kinematics_unittest ship_unittest)

foreach(test ${tests})
   add_executable(${test} ${test}.cpp)
   target_link_libraries(${test} ${links})
   add_test(${test} ${dir}/${test})
   run_test(${test})
endforeach(test)
