#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>

void * MyMemmove(void *dest, void * src, int count)
{
	void *ret = dest;
	if (src > dest)
	{
		while (count != 0)
		{
			*(char *)dest = *(char *)src;
			((char *)dest)++;
			((char *)src)++;
			count--;
		}
	}
	else
	{
		count--;
		while (count >= 0)
		{
			*((char *)dest + count) = *((char *)src + count);
			count--;
		}

	}

	return ret;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	MyMemmove(arr+2, arr, 16);
	for (int i = 0; i < 8; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}