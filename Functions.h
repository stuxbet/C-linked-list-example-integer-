#pragma once
#include <vector>

using namespace std;

void shellSort(vector<int>& invec);
void mergeSort(vector<int>& array);
void mergesort(vector<int>& array, vector<int>& result, int);
void merge(vector<int>& array, vector<int>& result, int lowPointer, int highPointer, int upperBound);
