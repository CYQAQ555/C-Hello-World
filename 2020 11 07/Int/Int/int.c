#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

void Print(int n)
{
	if (n >= 10)
	{
		Print(n / 10);//�ݹ�ʵ�ִ�ӡÿһλ
	}
	printf("%d", n % 10);//�Ӹ�λ���λ��ӡ
}
int main()
{
	int n;
	printf("������һ��������\n");
	scanf("%d", &n);
	Print(n);
	system("pause");
	return 0;
}