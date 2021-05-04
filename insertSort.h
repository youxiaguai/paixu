#pragma once
#include <iostream>
#include <vector>

/*
每次将一个数字插入到有序数列中，直到所有的序列是有序的
比如对于无序序列『4，6，8，5，9』来说
双指针，若i比j所指的数大，则往后移，否则，j往前移动，直到比i所指的小，则交换。
*/
using namespace std;

void insertSort(vector<int>&arr,int len)
{
	int temp;
	
	int i, j;
	for (i = 1; i < len; i++)
	{
		temp = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > temp; j--)
		{
			swap(arr[j], arr[j + 1]);
		}
		
	}

}