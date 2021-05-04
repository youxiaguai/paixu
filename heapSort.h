#pragma once
#include <iostream>
#include <vector>
using namespace std;

//构建大根堆
void adjust(vector<int>& arr, int len, int index)
{
	int left = index * 2 + 1;//index的左子节点
	int right = index * 2 + 2;//index的右子节点

	int maxIndex = index;

	if (left<len && arr[left]>arr[maxIndex])maxIndex = left;
	if (right<len && arr[right]>arr[maxIndex])maxIndex = right;

	if (maxIndex != index)
	{
		swap(arr[maxIndex], arr[index]);
		adjust(arr, len, maxIndex);
	}
}

//堆排序调整
void heapSort(vector<int>& arr, int size)
{
	for (int i = size/2 - 1; i >= 0; i--)
	{
		adjust(arr, size, i);
	}
	//调整大根堆
	for (int i = size - 1; i >= 1; i--)
	{
		swap(arr[0], arr[i]);
		adjust(arr, i, 0);
	}

}