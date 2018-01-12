#include <iostream>
#include "header.h"
#include <vector>

using namespace std;

int main()
{
	vector<int> L = {2,2,3,3,4,5,6,7,8,10}; //set of pairwise distances
	vectormergesort(L, 0, L.size()-1);

	partialDigest(L);

	return 0;
}