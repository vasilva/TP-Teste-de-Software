# $ cmake --version
cmake_minimum_required(VERSION 3.14)

# Set the project name
project (Lembrete)

# add googletest subdirectory
add_subdirectory(googletest)

# this is so we can #include <gtest/gtest.h> 
include_directories(googletest/include)

# add header files in the lib
include_directories(lib) 

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
    src/data.cpp
    src/hora.cpp
    src/lembrete.cpp
    src/main.cpp
)

# Add an executable with the above sources
add_executable(Lembrete ${SOURCES})

target_include_directories(Lembrete
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/lib
)

enable_testing()
add_executable(lembrete_test
    src/data.cpp 
    src/hora.cpp 
    src/lembrete.cpp 
    tests/utest-lembrete.cpp
)

target_link_libraries(lembrete_test GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(lembrete_test)