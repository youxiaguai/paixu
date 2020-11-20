#pragma once
#include <vector>
#include <iostream>
using namespace std;
/*
	简单选择排序的基本思想：
	第1趟，在待排序记录r[1]~r[n]中选出最小的记录，将它与r[1]交换；
	第2趟，在待排序记录r[2]~r[n]中选出最小的记录，将它与r[2]交换；
	以此类推，第i趟在待排序记录r[i]~r[n]中选出最小的记录，将它与r[i]交换，使有序序列不断增长直到全部排序完毕。
	比如例子：{49 27 65 97 12 38}
*/
void xuanze(vector<int>& arr)
{
	int length = arr.size();
	vector<int> res(length,0);
	
	int xiabiao = 0;
	for (int i = 0; i < length; i++)
	{
		
		int temp = min(INT_MAX,arr[i]);
		
		for (int j = i + 1; j < length; j++)
		{
			
			if (temp >arr[j])
			{
				temp = arr[j];
				xiabiao = j;
			}
			
		}
		swap(arr[i], arr[xiabiao]);
		xiabiao = i + 1;
		
	}
	
}