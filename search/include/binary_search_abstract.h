/*===========================================================================================
* Name : binary_search_abstract.h
* Author: tiaunjia
* Description: Algorithm to perform Discrete Binary Search on a Sorted Sequence based on the Main Theorem.
* Sources: 
*        [1] http://community.topcoder.com/tc?module=Static&d1=tutorials&d2=binarySearch
* Date Created: Mon.Oct.4.2016
* Date Last Modified: 
*=============================================================================================*/

#include <vector>
#include <cstdio>

inline bool p(int x, int target)
{
	return (x >= target);
}
int binarySearch(const std::vector<int>& v, int target, int lo, int hi, 
	bool(&p)(int, int));