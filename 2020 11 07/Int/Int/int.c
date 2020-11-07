#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

void Print(int n)
{
	if (n >= 10)
	{
		Print(n / 10);//递归实现打印每一位
	}
	printf("%d", n % 10);//从高位向低位打印
}
int main()
{
	int n;
	printf("请输入一个整数：\n");
	scanf("%d", &n);
	Print(n);
	system("pause");
	return 0;
}