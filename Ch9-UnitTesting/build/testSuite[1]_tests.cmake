add_test([=[functions.add]=]  [==[C:/CppProjects/Chapter Projects/Chapter-9/Ch9-UnitTesting/build/testSuite.exe]==] [==[--gtest_filter=functions.add]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[functions.add]=]  PROPERTIES WORKING_DIRECTORY [==[C:/CppProjects/Chapter Projects/Chapter-9/Ch9-UnitTesting/build]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  testSuite_TESTS functions.add)
