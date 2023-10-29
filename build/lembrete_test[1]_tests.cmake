add_test( PersonTestSuite.functionA /mnt/c/Users/vinic/Documents/projetos/lembrete/build/lembrete_test [==[--gtest_filter=PersonTestSuite.functionA]==] --gtest_also_run_disabled_tests)
set_tests_properties( PersonTestSuite.functionA PROPERTIES WORKING_DIRECTORY /mnt/c/Users/vinic/Documents/projetos/lembrete/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( lembrete_test_TESTS PersonTestSuite.functionA)
