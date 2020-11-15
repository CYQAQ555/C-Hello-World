#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>

void Swap(int arr[], int sz)
{
	int *left = arr;//leftָ�������һ��Ԫ��
	int *right = arr + sz - 1;//rightָ���������һ��Ԫ��
	while (left < right)
	{
		while ( (*left) % 2 != 0)//�ҵ�ż��
		{
			left++;
		}
		while ((*right) % 2 == 0)//�ҵ�����
		{
			right--;
		}
		if (left < right)//����������ǰ�棬ż����������
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
