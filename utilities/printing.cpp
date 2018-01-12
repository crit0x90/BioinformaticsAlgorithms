#include <iostream>
#include <time.h>
#include <vector>
#include <stdlib.h>
#include "../header.h"

void printVector(vector<int>& v)
{
	for(int i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << " ";
	}
}