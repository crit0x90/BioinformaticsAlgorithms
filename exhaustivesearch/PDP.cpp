#include <iostream>
#include <vector>
#include "../header.h"
using namespace std;


//removes all instances of target from vector L
void Delete(int target, vector<int>& L)
{
	int initsize = L.size();
	
	for(int i = 0; i < L.size(); i++)
	{
		if(L.at(i) == target)
		{
			L.erase(L.begin()+i);
		}
	}

	int finalsize = L.size();

	if (finalsize < initsize)
	{
		Delete(target, L);
	}
}

//generates a vector of distances between y and 
//every element of X
vector<int> delta(int y, vector<int>& X)
{
	vector<int> delta;

	for(int i = 0; i < X.size(); i++)
	{
		if(y > X.at(i))
		{
			delta.push_back(y - X.at(i));
		}
		else
		{
			delta.push_back(X.at(i) - y);
		}
	}

	printVector(delta);
}

//helper function for subset
bool in(int x, vector<int>& L)
{
	bool flag = false;

	for(int i = 0; i < L.size(); i++)
	{
		if(x == L.at(i))
		{
			flag = true;
		}
	}
	return flag;
}

//checks if vector v is a subset of vector L
bool subset(vector<int> &v, vector<int>& L)
{
	bool flag = true;

	for(int i = 0; i < v.size(); i++)
	{
		if(!in(v.at(i), L))
		{
			flag = false;
		}
	}
	return flag;
}

void Place(vector<int>& L, vector<int>& X)
{
	if(L.size() == 0)
	{
		printVector(X);
		return;
	}

	int y = L.at(L.size()-1);

	//vector<int> delta_yX = 
	delta(y,X);
	/*
	printVector(delta_yX);
	if(subset(delta_yX, L))
	{
		cout << "do something" << endl;
	}
	
	vector<int> delta_widthX = delta(L.at(L.size()-1)-y, X);
	if(subset(delta_widthX, L))
	{
		cout << "do something else";
	}
	*/
	return;
}

void partialDigest(vector<int>& L)
{
	int width = L.at(L.size()-1);
	Delete(width, L);
	vector<int> X = {0, width};
	Place(L, X);
}
