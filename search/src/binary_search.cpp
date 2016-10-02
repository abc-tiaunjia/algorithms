/*===========================================================================================
* Name : binary_search.cpp
* Author: tiaunjia
* Description: Algorithm to perform Binary Search on a Sorted Sequence.
* Sources: 
*        [1] http://community.topcoder.com/tc?module=Static&d1=tutorials&d2=binarySearch
* Date Created: Sat.Oct.1.2016
* Date Last Modified: 
*=============================================================================================*/

#include <vector>
#include <cstdio>

#include "binary_search.h"

using std::vector;

/*
Notes:
  hi = v.size() - 1;
  while (lo <= hi)  (NOT while (lo < hi))
*/
int binarySearch(const vector<int>& v, int target)
{
  if (v.empty()) return -1;

  int lo = 0;
  int hi = v.size() - 1; // tests necessary to create correct bounds

  while(lo <= hi)
  {
    int mid = (lo + hi)/2;
    if (target == v[mid]) return mid;
    else if (target < v[mid]) hi = mid -1;
    else lo = mid + 1;
  }

  return -1; // target not found
}
