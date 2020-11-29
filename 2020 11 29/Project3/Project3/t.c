#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <Windows.h>

void  *MyMemcpy(void *dest,void *src,int count)
{
	void *ret = dest;
	assert(dest);
	assert(src);
	while (count != 0)
	{
		*(char *)dest = *(char *)src;
		((char *)dest)++;
		((char *)src)++;
		count--;
	}
	return ret;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	MyMemcpy(arr, arr + 2, 16);
	for (int i = 0; i < 8; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}