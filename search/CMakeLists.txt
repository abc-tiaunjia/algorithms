cmake_minimum_required(VERSION 2.8)
project(search)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/build;${CMAKE_MODULE_PATH}")

# Set CMake Vars
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

include_directories(
  include
)

# Add Binary Search Library
add_library(search_lib src/binary_search.cpp)

# Add Binary Search Executable
# add_executable(binary_search src/binary_search.cpp)

# Unit Testing
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Link runTests with what we want to test and the GTest and pthread library
add_executable(runBinarySearchTests test/test_binary_search.cpp)
target_link_libraries(runBinarySearchTests ${GTEST_LIBRARIES} pthread search_lib)

# target_link_libraries(runUnitTests gtest gtest_main)
add_test(runBinarySearchTests runBinarySearchTests)


