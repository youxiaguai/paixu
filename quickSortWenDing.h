#pragma once
//�������� ����6 1 2 7 9 3 4 5 10 8 ��һ����׼���Ӻ���ǰ�ұȻ�׼С�ģ���ǰ�����ұ�����ģ�Ȼ�󽻻���
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