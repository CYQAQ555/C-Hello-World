#define  _CRT_SECURE_NO_WARNINGS 1
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>

int cmp1(const int * p1, const int * p2)//比较int类型数据的大小 
{
	return(*(int *)p1 - *(int *)p2);
}
char cmp2(const char * p1, const char * p2)//比较char类型数据的大小 
{
	return(*(char *)p1 - *(char *)p2);
}
long cmp3(const long * p1, const long * p2)//比较float类型数据的大小 
{
	return(*(long *)p1 - *(long *)p2);
}
int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
	char arr2[] = { 'a', 's', 'd', 'z', 'x', 'c' };
	long arr3[] = { 111, 311, 511, 211, 411, 611 };
	int count = sizeof(arr) / sizeof(arr[0]);
	int count2 = sizeof(arr2) / sizeof(arr2[0]);
	int count3 = sizeof(arr3) / sizeof(arr3[0]);
	qsort(arr, count, sizeof(int), cmp1);
	qsort(arr2, count2, sizeof(char), cmp2);
	qsort(arr3, count3, sizeof(long), cmp3);
	int i = 0;
	for (i = 0; i < count; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (i = 0; i < count2; i++)
	{
		printf("%c ", arr2[i]);
	}
	printf("\n");
	for (i = 0; i < count3; i++)
	{
		printf("%d ", arr3[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}