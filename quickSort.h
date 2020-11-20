#pragma once
//�������� ����6 1 2 7 9 3 4 5 10 8 ��һ����׼���Ӻ���ǰ�ұȻ�׼С�ģ���ǰ�����ұ�����ģ�Ȼ�󽻻���
#include <vector>
#include <iostream>
using namespace std;

void quickSort(int left, int right, vector<int>& arr)
{
	if (left >= right)
	{
		return;
	}
	int i, j, base, temp;
	i = left, j = right;
	base = arr[left];
	while (i < j)
	{
		while (arr[j] >= base && i < j)//�Ӻ���ǰ�ұ�baseС�ģ����������ǰ��
		{
			j--;
		}
		while (arr[i] <= base && i < j)//��ǰ�����ұ�base��ģ�������������
		{
			i++;
		}
		if (i < j)//����ָ��δ�������򽻻�
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;

		}

	}
	arr[left] = arr[i];//i==jʱ arr[i]��base���������һ�ο���
	arr[i] = base;
	cout << "����һ�ν�����" << endl;
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	quickSort(left, i - 1, arr);//�Ըո��������ǰ��Ľ��п���
	quickSort(i + 1, right, arr);//�Ժ���������п���

}
