#pragma once
//快速排序 举例6 1 2 7 9 3 4 5 10 8 找一个基准。从后往前找比基准小的，从前往后找比他大的，然后交换。
#include <vector>
#include <iostream>
using namespace std;

void quickSort(int left, int right, vector<int>& arr)
{
	int n = arr.size();
	vector<int>help(n);
	if (left >= right)
	{
		return;
	}
	int i, j, base, temp;
	base = arr[left];
	int i = left, j = right;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < base)
		{
			help[i] = arr[i];
		}
	}
	for (int i = n-1; i >=0; i--)
	{
		if (arr[i] > base)
		{
			help[i] = arr[i];
		}
	}
}