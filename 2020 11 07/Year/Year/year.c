#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>

int LeapYear(int n)
{
	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int year;
	printf("������Ҫ�жϵ���ݣ�");
	scanf("%d", &year);
	int n = LeapYear(year);
	if (n == 1)
	{
		printf("����������\n");
	}
	else
	{
		printf("���겻������\n");
	}
	system("pause");
	return 0;
}