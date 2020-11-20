#pragma once
#include <vector>
#include <iostream>
#include <cassert>
using namespace std;
/*
	��������{6��202��100��301��38��8��1}
	��ʼ״̬��6,202,100,301,38,8,1
	��һ�ι鲢��{6,202},{100,301},{8,38},{1}���Ƚϴ�����3��
	�ڶ��ι鲢��{6,100,202,301}��{1,8,38}���Ƚϴ�����4��
	�����ι鲢��{1,6,8,38,100,202,301},�Ƚϴ�����4��
	�ܵıȽϴ���Ϊ��3+4+4=11��
	������Ϊ14��
*/
//void Merge(vector<int> a,vector<int> b, int start, int mid, int end)
//{
//    int i = start, j = mid + 1, k = start;
//    while (i != mid + 1 && j != end + 1)
//    {
//        if (a[i] > a[j])
//            b[k++] = a[j++];
//        else
//            b[k++] = a[i++];
//    }
//    while (i != mid + 1)
//        b[k++] = a[i++];
//    while (j != end + 1)
//        b[k++] = a[j++];
//    for (i = start; i <= end; i++)
//    {
//        a[i] = b[i];
//    }
//}
//
////�ݹ鲿�֣��ֵĲ��֣�
//void MergeSort(vector<int> a, vector<int> b, int start, int end)
//{
//    int mid;
//    if (start < end)
//    {
//        mid = start + (end - start) / 2;
//        Merge(a, b, start, mid, end);
//        MergeSort(a, b, start, mid);
//        MergeSort(a, b, mid + 1, end);
//        
//    }
//}
//
////�ϲ����̣��εĹ��̣�
//
//
//void merge(int* array, int low, int mid, int high)
//{
//    assert(array && low >= 0 && low <= mid && mid <= high);
//
//    int* temp = (int*)malloc((high - low + 1) * sizeof(int));
//    if (!temp) {
//        printf("Error:out of memory!");
//        return;
//    }
//
//    int i = low;
//    int j = mid + 1;
//    int index = 0;
//
//    while (i <= mid && j <= high) {
//        if (array[i] <= array[j]) {
//            temp[index++] = array[i++];
//        }
//        else {
//            temp[index++] = array[j++];
//        }
//    }
//
//    while (i <= mid) {
//        temp[index++] = array[i++];
//    }
//
//    while (j <= high) {
//        temp[index++] = array[j++];
//    }
//
//    memcpy((void*)(array + low), (void*)temp, (high - low + 1) * sizeof(int));
//
//    free(temp);
//}
//
//void merge_pass(int* array, int length, int n)
//{
//    assert(array && length >= 1 && n >= 1);
//
//    int i;
//    int sortLength = 2 * n;
//
//    // �鲢����Ϊ n ����������������
//    for (i = 0; i + sortLength - 1 < length; i = i + sortLength) {
//        merge(array, i, i + n - 1, i + sortLength - 1);
//    }
//
//    // �� i + n - 1 < length - 1����ʣ��һ�����ļ��ֿգ�����鲢��
//    // �������������У����к�һ������С�� n, �鲢������������С�
//    if (length - 1 > i + n - 1) {
//        merge(array, i, i + n - 1, length - 1);
//    }
//}
//
//// �÷��η��������Ͻ��ж�·�鲢����
////
//void merge_sort(int* array, int length)
//{
//    assert(array && length >= 0);
//
//    int n;
//
//    for (n = 1; n < length; n = (n << 1)) {
//        merge_pass(array, length, n);
//    }
//}

// 1
template<typename T>// �������c���Կ�ʹ��,��Ҫʹ�����(class)�r����O��"С�"(<)���\���ӹ���
void merge_sort(T* a, int len) {
    T* b = new T[len];
    for (int seg = 1; seg < len; seg += seg) {
        for (int start = 0; start < len; start += seg + seg) {
            int low = start, mid = min(start + seg, len), high = min(start + seg + seg, len);
            int k = low;
            int start1 = low, end1 = mid;w
            int start2 = mid, end2 = high;
            while (start1 < end1 && start2 < end2)
                b[k++] = a[start1] < a[start2] ? a[start1++] : a[start2++];
            while (start1 < end1)
                b[k++] = a[start1++];
            while (start2 < end2)
                b[k++] = a[start2++];
        }
        T* temp = a;
        a = b;
        b = temp;
    }
    //if (a != arr) {
    //    for (int i = 0; i < len; i++)
    //        b[i] = a[i];
    //    b = a;
    //}
    delete[] b;
}