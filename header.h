#ifndef PLAYER_H
#define PLAYER_H
#include <vector>

using namespace std;

//This file will serve as the main header file for the program


//****************************************************
//utility functions

//when calling the merge sorts l will be zero and r will be size-1
int mergesort(int arr[], int l, int r);

void vectormergesort(vector<int>& v, int l, int r);

void printVector(vector<int>& v);
//****************************************************


//****************************************************
//exhaustive search algorithms

void partialDigest(vector<int>& L);

//****************************************************


//greedy algorithms

//dynamic programming algorithms

//divide and conquer algorithms

//graph algorithms

//combinatorial pattern matching

//clustering and trees

//hidden markov models

//randomized algorithms

#endif