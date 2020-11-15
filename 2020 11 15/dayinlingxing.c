#include<stdio.h>

void PrintLine(int blank, int start)
{     
	int i = 0;
	for (; i < blank; i++)
	{
		printf(" ");
	}
	for (i = 0; i < start; i++)
	{
		printf("*");
	}
	printf("\n");
}
void  Print(int n)
{
	int i = 1;
	for (i = 1; i < n; i++)//打印上半部分
	{
		PrintLine(n - i, 2 * i - 1); //打印每一行的空格和每一行的星号
	}
	PrintLine(0, 2 * n - 1);//打印中间部分
	for (i = n - 1; i > 0; i--)//打印下半部分
	{
		PrintLine(n - i, 2 * i - 1);
	}
}
int main()
{
	Print(7);//输入行数的一半 
	return 0;
}
