#pragma once
#include <vector>
#include <iostream>
using namespace std;
/*
	��ѡ������Ļ���˼�룺
	��1�ˣ��ڴ������¼r[1]~r[n]��ѡ����С�ļ�¼��������r[1]������
	��2�ˣ��ڴ������¼r[2]~r[n]��ѡ����С�ļ�¼��������r[2]������
	�Դ����ƣ���i���ڴ������¼r[i]~r[n]��ѡ����С�ļ�¼��������r[i]������ʹ�������в�������ֱ��ȫ��������ϡ�
	�������ӣ�{49 27 65 97 12 38}
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