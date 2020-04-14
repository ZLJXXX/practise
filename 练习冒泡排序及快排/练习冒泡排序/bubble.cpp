#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//冒泡排序
void Swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
/*void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}*/
void bubblesort(int a[], int left, int right)
{
	for (int j = right; j >= 0; j--)
	{
		for (int i = 1; i <= j; i++)
		{
			if (a[i - 1] > a[i])
			{
				Swap(a[i - 1], a[i]);
			}
		}
		right--;
	}
}
//
//快排的单趟排序
//快排的优化算法：三数取中法
int GetMinindex(int* a, int left, int right)
{
	int mid = left + (right - left) / 2;
	if (a[left] < a[mid])
	{
		if (a[mid] < a[right])
			return mid;
		else if (a[left] > a[right])
			return left;
		else
			return right;
	}
	else
	{
		if (a[mid]<a[left])
			return mid;
		else if (a[right]>a[left])
			return right;
		else
			return left;

	}
}

int singlesort(int a[], int left, int right)
{
	int index = GetMinindex(a, left, right);
	Swap(a[index], a[right]);
	int key = a[right];
	int key_index = right;
	while (left < right)
	{
		while (left < right && a[left] <= key)
		{
			++left;
		}
		while (left < right && a[right] >= key)
		{
			--right;
		}
		Swap(a[left], a[right]);
	}
	Swap(a[left], a[key_index]);
	return left;
}
//多躺
void Quicksort(int a[], int left, int right)
{
	if (left >= right)
		return;
	int key = singlesort(a, left, right);
	Quicksort(a, left, key - 1);
	Quicksort(a, key + 1, right);
}
int main()
{
	int array[10] = { 0, 5, 4, 3, 6, 2, 1, 8, 7, 9 };
	int left = 0;
	int right = sizeof(array)/sizeof(int) - 1;
	//bubblesort(array,left,right);
	Quicksort(array, 0, right);
	for (int i = 0; i <= right; i++)
	{
		cout << array[i] << ' ';
	}
	cout << endl;
	system("pause");
	return 0;
}