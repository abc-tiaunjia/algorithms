/*===========================================================================================
* Name : test_binary_search.cpp
* Author: tiaunjia
* Description: Unit Tests for Binary Search
* Date Created: Sun.Oct.2.2016
*=============================================================================================*/


#include <gtest/gtest.h>
#include "binary_search.h"

using std::vector;

TEST(BinarySearchTest, SingleElementVector1) 
{
  vector<int> v = {1};
  int target = 3;
  int index = binarySearch(v, target);

  ASSERT_EQ(-1, binarySearch(v, 3));
}
TEST(BinarySearchTest, SingleElementVector2) 
{
  vector<int> v = {5};
  int target = 5;
  int index = binarySearch(v, target);

  // ASSERT_EQ(0, index);
  ASSERT_EQ(-1, binarySearch(v, 3));
}

TEST(BinarySearchTest, TwoElementVector) 
{
  vector<int> v = {1, 2};
  int target = 1;
  int index = binarySearch(v, target);

  ASSERT_EQ(0, index);
}

TEST(BinarySearchTest, ThreeElementVector) 
{
  vector<int> v = {1, 6, 9};
  int target = 6;
  int index = binarySearch(v, target);

  ASSERT_EQ(1, index);
  ASSERT_EQ(-1, binarySearch(v, 12));
}


int main(int ac, char* av[])
{
  testing::InitGoogleTest(&ac, av);
  return RUN_ALL_TESTS();
}