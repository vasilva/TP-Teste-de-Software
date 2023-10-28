add_test( data.add /mnt/c/Users/vinic/Documents/projetos/lembrete/build/mytests [==[--gtest_filter=data.add]==] --gtest_also_run_disabled_tests)
set_tests_properties( data.add PROPERTIES WORKING_DIRECTORY /mnt/c/Users/vinic/Documents/projetos/lembrete/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( mytests_TESTS data.add)
