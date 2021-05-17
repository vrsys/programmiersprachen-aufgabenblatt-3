# Build tests

file(GLOB_RECURSE TEST_FILES *.test)


add_executable(tests
  tests.cpp
  list.hpp
  
  ${TEST_FILES}
)


