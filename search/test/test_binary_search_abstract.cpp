/*===========================================================================================
* Name : test_binary_search_abstract.cpp
* Author: tiaunjia
* Description: Unit Tests for Binary Search
* Date Created: Mon.Oct.4.2016
*=============================================================================================*/


#include <gtest/gtest.h>
#include "binary_search_abstract.h"

using std::vector;

TEST(BinarySearchTest, Test1) 
{
  vector<int> v = {0, 5, 13, 19, 22, 41, 55, 68, 72, 81, 98};
  int target = 55;
  int lo = 0;
  int hi = v.size() - 1;
  int index = binarySearch(v, target, lo, hi, p);

  printf("\033[94m index: %d \n", index);

  ASSERT_EQ(6, index);
}