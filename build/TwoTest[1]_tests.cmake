add_test([=[TwoTest.PrintTwo]=]  /home/giraffael/Documents/E658/gittest/build/TwoTest [==[--gtest_filter=TwoTest.PrintTwo]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[TwoTest.PrintTwo]=]  PROPERTIES WORKING_DIRECTORY /home/giraffael/Documents/E658/gittest/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  TwoTest_TESTS TwoTest.PrintTwo)
