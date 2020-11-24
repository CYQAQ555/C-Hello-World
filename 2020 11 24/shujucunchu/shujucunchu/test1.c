#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>

int main()
{
	int a = 0x11223344;//若是小端地址应该是0x44 33 22 11；大端则是0x11 22 33 44。
	char *p = (char *)&a;//&a->int *,要进行强制类型转换，取到a的首地址
	if (*p == 0x44)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	system("pause");
	return 0;
}