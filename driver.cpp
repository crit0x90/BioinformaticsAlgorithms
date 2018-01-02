#include <iostream>
#include "header.h"
#include <vector>

using namespace std;

int main()
{
	cout << "Hello world" << endl;
	vector<int> a = {0,2,4,7,10}; //set of points
	int n = a.size(); 

	bruteForcePDP(a, n); //prints the pairwise distances between the points

	return 0;
}