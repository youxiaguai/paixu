#pragma once
#include <iostream>
#include <vector>
using namespace std;

//���������
void adjust(vector<int>& arr, int len, int index)
{
	int left = index * 2 + 1;//index�����ӽڵ�
	int right = index * 2 + 2;//index�����ӽڵ�

	int maxIndex = index;

	if (left<len && arr[left]>arr[maxIndex])maxIndex = left;
	if (right<len && arr[right]>arr[maxIndex])maxIndex = right;

	if (maxIndex != index)
	{
		swap(arr[maxIndex], arr[index]);
		adjust(arr, len, maxIndex);
	}
}

//���������
void heapSort(vector<int>& arr, int size)
{
	for (int i = size/2 - 1; i >= 0; i--)
	{
		adjust(arr, size, i);
	}
	//���������
	for (int i = size - 1; i >= 1; i--)
	{
		swap(arr[0], arr[i]);
		adjust(arr, i, 0);
	}

}