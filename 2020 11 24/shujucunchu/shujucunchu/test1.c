#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>

int main()
{
	int a = 0x11223344;//����С�˵�ַӦ����0x44 33 22 11���������0x11 22 33 44��
	char *p = (char *)&a;//&a->int *,Ҫ����ǿ������ת����ȡ��a���׵�ַ
	if (*p == 0x44)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	system("pause");
	return 0;
}