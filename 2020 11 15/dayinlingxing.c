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
	for (i = 1; i < n; i++)//��ӡ�ϰ벿��
	{
		PrintLine(n - i, 2 * i - 1); //��ӡÿһ�еĿո��ÿһ�е��Ǻ�
	}
	PrintLine(0, 2 * n - 1);//��ӡ�м䲿��
	for (i = n - 1; i > 0; i--)//��ӡ�°벿��
	{
		PrintLine(n - i, 2 * i - 1);
	}
}
int main()
{
	Print(7);//����������һ�� 
	return 0;
}
