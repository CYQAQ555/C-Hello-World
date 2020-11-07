#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>

void Mul(int i,int j)
{
	int a;
	int b;
	for (a = 1; a <= i; a++)
	{
		for (b = 1; b <= j; b++)
		{
			printf("%d*%d=%d\t", a, b, a*b);
			
		}
		printf("\n");
	}
}
int main()
{
	int i, j;
	printf("请输入行数和列数：");
	scanf("%d%d", &i, &j);
	Mul(i,j);
	system("pause");
	return 0;
}