#pragma once
/*
	对于一个无序序列{8，9，1，7，2，3，5，4，6，0}
	设置初始增量gap为length/2,所以就被分为了五组，分别为{8，3}，{9，5}，{1，4}，{7，6}，{2，0}
	对这五组分别进行直接插入排序，则最小的元素就被调到了前面,即{3,5,1,6,0,8,9,4,7,2}
	然后再缩小增量gap=gap/2=2;
	则就变成了两组，分别是{3,1,0,9,7}{5,6,8,4,2}
	对这两组在进行直接插入排序，变为{0,2,1,4,3,5,7,6,9,8}
	然后再缩小增量gap=gap/2=1
	再进行调整即为结果
*/
#include <vector>
#include <iostream>
using namespace std;

void shellSort(vector<int>& arr, int length)
{
	for (int gap = length / 2; gap > 0; gap = gap / 2)
	{
		for (int i = gap; i < length; i++)
		{
			int j = i;
			while (j - gap >= 0 && arr[j] < arr[j - gap])
			{
				swap(arr[j], arr[j - gap]);
				j = j - gap;
			}
		}
		
	}
}