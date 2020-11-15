#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>

void Swap(int arr[], int sz)
{
	int *left = arr;//left指向数组第一个元素
	int *right = arr + sz - 1;//right指向数组最后一个元素
	while (left < right)
	{
		while ( (*left) % 2 != 0)//找到偶数
		{
			left++;
		}
		while ((*right) % 2 == 0)//找到奇数
		{
			right--;
		}
		if (left < right)//将奇数换到前面，偶数换到后面
		{
			int t = *left;
			*left = *right;
			*right = t;
		}
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Swap(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d  ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
