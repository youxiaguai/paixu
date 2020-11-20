#pragma once
#include <vector>
using namespace std;
/*
	对于序列{49,38,65,97,76,13,27}
	一趟结束后为：38 49 65 76 13 27 97
	两趟之后为:38 49 65 13 27 76 97
*/
void maopao(vector<int>& arr)
{
	int len = arr.size();
	for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
}