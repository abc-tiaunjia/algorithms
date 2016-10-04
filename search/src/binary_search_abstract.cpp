/*===========================================================================================
* Name : binary_search_abstract.cpp
* Author: tiaunjia
* Description: Algorithm to perform Discrete Binary Search on a Sorted Sequence based on the Main Theorem.
* Sources: 
*        [1] http://community.topcoder.com/tc?module=Static&d1=tutorials&d2=binarySearch
* Date Created: Mon.Oct.4.2016
* Date Last Modified: 
*=============================================================================================*/

#include <vector>
#include <cstdio>

#include "binary_search_abstract.h"

using std::vector;

// bool p(const vector<int>& v, int mid, int target)
// {
// 	return (v[mid] >= target);
// }

int binarySearch(const std::vector<int>& v, int target, int lo, int hi, 
	bool(&p)(const std::vector<int>&, int, int))
{
	while (lo < hi)
	{
		int mid = (lo + hi)/2;
		if (p(v, mid, target) == true)
			hi = mid;
		else
			lo = mid + 1;
	}
	
	if (p(v, lo, target) == false)	
		return -1;

	return lo;
}