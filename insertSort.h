#pragma once
#include <iostream>
#include <vector>

/*
ÿ�ν�һ�����ֲ��뵽���������У�ֱ�����е������������
��������������С�4��6��8��5��9����˵
˫ָ�룬��i��j��ָ�������������ƣ�����j��ǰ�ƶ���ֱ����i��ָ��С���򽻻���
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