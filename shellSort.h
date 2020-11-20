#pragma once
/*
	����һ����������{8��9��1��7��2��3��5��4��6��0}
	���ó�ʼ����gapΪlength/2,���Ծͱ���Ϊ�����飬�ֱ�Ϊ{8��3}��{9��5}��{1��4}��{7��6}��{2��0}
	��������ֱ����ֱ�Ӳ�����������С��Ԫ�ؾͱ�������ǰ��,��{3,5,1,6,0,8,9,4,7,2}
	Ȼ������С����gap=gap/2=2;
	��ͱ�������飬�ֱ���{3,1,0,9,7}{5,6,8,4,2}
	���������ڽ���ֱ�Ӳ������򣬱�Ϊ{0,2,1,4,3,5,7,6,9,8}
	Ȼ������С����gap=gap/2=1
	�ٽ��е�����Ϊ���
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