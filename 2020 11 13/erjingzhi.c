//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
#include <stdio.h>

int main()
{
	int m = 0;
	scanf("%d", &m);
	int i = 0;
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	return 0;
}
