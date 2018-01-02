#include <iostream>
#include <vector>
#include "header.h"
using namespace std;

//takes roughly O(M^n-2) time
void bruteForcePDP(vector<int>& a, int n)
{
	int m = 0;

	//get max elt in vector for m
	for(int i = 0; i < a.size(); i++)
	{
		if(a.at(i) > m)
		{
			m = a.at(i);
		}
	}


 
}
