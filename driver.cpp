#include <iostream>
#include "header.h"
#include <vector>

using namespace std;

int main()
{
	vector<int> a = {2,2,3,3,4,5,6,7,8,10}; //set of pairwise distances
	int n = a.size(); 

	bruteForcePDP(a, n); //prints the pairwise distances between the points

	return 0;
}