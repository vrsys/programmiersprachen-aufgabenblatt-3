# Build tests

file(GLOB_RECURSE TEST_FILES *.test)


add_executable(tests
  tests.cpp
  list_iterator.hpp
  list_node.hpp
  list.hpp
  
  ${TEST_FILES}
)


