#include <iostream>
#include <time.h>
#include <vector>
#include <stdlib.h>
#include "../header.h"

using namespace std;

//array based version
int merge(int arr[], int l, int m, int r)
{
	//number of elements for each subarray
	int l1 = m - l + 1;
	int l2 = r - m;

	int sub1[l1];
	int sub2[l2];

	for (int i = 0; i < l1; i++)
	{
		//copy left portion of array to merge
		sub1[i] = arr[l+i];
	}
	for (int i = 0; i < l2; i++)
	{
		//copy right portion of array to merge
		sub2[i] = arr[m + 1 + i];
	}

	int i = 0; //start index for first array
	int j = 0; //start index for second array
	int k = l; //start index for the merged array
	//copy elements while neither array has been exhausted
	while(i < l1 && j < l2)
	{
		if(sub1[i] <= sub2[j])
		{
			arr[k] = sub1[i];
			i++;
		}
		else
		{
			arr[k] = sub2[j];
			j++;
		}
		k++;
	}

	//copy any leftovers for sub1
	if (i < l1)
	{
		for(i = i; i < l1; i++)
		{
			arr[k] = sub1[i];
			k++;
		}
	}

	//copy any leftovers for sub2
	if (j < l2)
	{
		for(j = j; j < l2; j++)
		{
			arr[k] = sub2[j];
			k++;
		}
	}
}

int mergesort(int arr[], int l, int r)
{
	int middle = 0;
	
	if(r > l)
	{
		middle = (l+r)/2;
		mergesort(arr, l, middle);
		mergesort(arr, middle+1, r);
		merge(arr, l, middle, r);
	}
}
//end array based version

//vector based version
void vectormerge(vector<int> &v, int l, int m, int r)
{
	//number of elements for each subarray
	int l1 = m - l + 1;
	int l2 = r - m;

	int sub1[l1];
	int sub2[l2];

	for (int i = 0; i < l1; i++)
	{
		//copy left portion of array to merge
		sub1[i] = v.at(l+i);
	}
	for (int i = 0; i < l2; i++)
	{
		//copy right portion of array to merge
		sub2[i] = v.at(m + 1 + i);
	}

	int i = 0; //start index for first array
	int j = 0; //start index for second array
	int k = l; //start index for the merged array
	//copy elements while neither array has been exhausted
	while(i < l1 && j < l2)
	{
		if(sub1[i] <= sub2[j])
		{
			v.at(k) = sub1[i];
			i++;
		}
		else
		{
			v.at(k) = sub2[j];
			j++;
		}
		k++;
	}

	//copy any leftovers for sub1
	if (i < l1)
	{
		for(i = i; i < l1; i++)
		{
			v.at(k) = sub1[i];
			k++;
		}
	}

	//copy any leftovers for sub2
	if (j < l2)
	{
		for(j = j; j < l2; j++)
		{
			v.at(k) = sub2[j];
			k++;
		}
	}
}

void vectormergesort(vector<int>& v, int l, int r)
{
	int middle = 0;
	
	if(r > l)
	{
		middle = (l+r)/2;
		vectormergesort(v, l, middle);
		vectormergesort(v, middle+1, r);
		vectormerge(v, l, middle, r);
	}
}
//end vector based version
