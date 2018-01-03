#include <iostream>
#include <vector>
#include "header.h"
using namespace std;


vector<int> delta(vector<int>& x)
{
	vector<int> delta;
	int j = x.size() - 1;

	cout << "X" << endl;
	for(int i = 0; i < j; i++)
	{
		cout << x.at(i) << " ";
	}
	cout << endl;
	
	while(j > 0)
	{
		for(int i = 0; i < j; i++)
		{
			cout << "i: " << i << " j: " << j << endl;
			delta.push_back((x.at(j) - x.at(i)));
		}

		j--;
	}

	cout << "Delta X" << endl;
	for(int i = 0; i < delta.size(); i++)
	{
		cout << delta.at(i) << ", ";
	}

	//merge sort of delta x
	
	return delta;
}

//takes roughly O(M^n-2) time
void bruteForcePDP(vector<int>& x, int n)
{
	int m = 0;

	//get max elt in vector for m
	for(int i = 0; i < x.size(); i++)
	{
		if(x.at(i) > m)
		{
			m = x.at(i);
		}
	}

	//delta creates the pairwise distance of all points in multiset X
	vector<int> delta_x = delta(x); 
 
}
