#include <stdio.h> 

int main()
{
	int i, j;
	for (i = 100; i <=200; i++)
	{//�ж�100��200�ڵ����� 
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)//�ж���i��2��i-1֮���Ƿ�������� 
				break;
		}
		if (j == i)
		{
			printf("%d \n", i);
		}
	}
	return 0;
}

