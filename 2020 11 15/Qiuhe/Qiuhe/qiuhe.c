#define  _CRT_SECURE_NO_WARNINGS 1
#include <Windows.h>
#include <stdio.h>

/*��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
���磺2+22+222+2222+22222*/
int sum(int a)
{
	int s = 0;
	int t = 0;
	int i;
	for (i = 0; i < 5; i++)
	{
		t = t * 10 + a;
		s += t;
	}
	return s;
}
int main()
{
	int a;
	printf("������һ�����֣�\n");
	scanf("%d", &a);
	int Sn = sum(a);
	printf("Sn = %d\n", Sn);
	system("pause");
	return 0;
}