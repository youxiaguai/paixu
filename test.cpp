#include "quickSort.h"
#include "insertSort.h"
#include "shellSort.h"
#include "maopao.h"
#include "xuanze.h"
#include "guibing.h"
#include "heapSort.h"
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
<<<<<<< HEAD
	int select = 1;
=======
	int select = 3;
>>>>>>> 43609e5c351acbc0ab2f49cebb853dafb443d2d9
	if (select == 0)
	{
		vector<int> arr = { 6,1,2,7,9,3,4,5,10,8 };
		quickSort(0, 9, arr);
		for (int i = 0; i < arr.size(); i++)
		{
			cout << arr[i] << " ";
		}
		//sort(arr.begin(), arr.end());
	}
	if (select == 1)
	{
		vector<int> arr = { 4,6,8,5,9 };
		cout << "ÅÅÐòÇ°£º" << endl;
		for (int i = 0; i < arr.size(); i++)
		{
			
			cout << arr[i] << " ";
		}
		cout << endl;
		insertSort(arr, arr.size());
		cout << "ÅÅÐòºó£º" << endl;
		for (int i = 0; i < arr.size(); i++)
		{
			
			cout << arr[i] << " ";
		}
	}
	if (select == 2)
	{
		vector<int> arr = { 8,9,1,7,2,3,5,4,6,0 };
		int length = 10;
		
		cout << "ÅÅÐòÇ°£º" << endl;
		for (int i = 0; i < arr.size(); i++)
		{

			cout << arr[i] << " ";
		}
		cout << endl;
		shellSort(arr, length);
		cout << "ÅÅÐòºó£º" << endl;
		for (int i = 0; i < arr.size(); i++)
		{

			cout << arr[i] << " ";
		}
	}
	if (select == 3)
	{
		vector<int> arr = { 49,38,65,97,76,13,27 };
		cout << "ÅÅÐòÇ°£º" << endl;
		for (int i = 0; i < arr.size(); i++)
		{

			cout << arr[i] << " ";
		}
		cout << endl;
		maopao(arr);
		cout << "ÅÅÐòºó£º" << endl;
		for (int i = 0; i < arr.size(); i++)
		{

			cout << arr[i] << " ";
		}
	}
	if (select == 4)
	{
		vector<int> arr = { 49, 27, 65, 97, 12, 38 };
		
		cout << "ÅÅÐòÇ°£º" << endl;
		for (int i = 0; i < arr.size(); i++)
		{

			cout << arr[i] << " ";
		}
		cout << endl;
		xuanze(arr);
		cout << "ÅÅÐòºó£º" << endl;
		for (int i = 0; i < arr.size(); i++)
		{

			cout << arr[i] << " ";
		}
	}
	if (select == 5) {
		vector<int> a = {4,2,8,543,2,67,34,11,89,5};
		int i;
		vector<int> b(10,0);
		int size = a.size();
		// MergeSort(a, b, 0, size-1);

		int aa[] = { 4,2,8,543,2,67,34,11,89,5 };
		//merge_sort(aa,10);

		merge_sort(aa, a.size());

		cout << "ÅÅÐòºó£º" << endl;
		for (int i = 0; i < a.size(); i++)
		{

			cout << aa[i] << " ----"<< b[i]<<endl;
		}
		
	}
	if (select == 6)
	{
		vector<int> arr = { 8, 1, 14, 3, 21, 5, 7, 10 };
		heapSort(arr, arr.size());
		for (int i = 0; i < arr.size(); i++)
		{
			cout << arr[i] << endl;
		}
		return 0;
		
	}
	return 0;
}