#include <stdio.h> 

int main()
{
	int i, j;
	for (i = 100; i <=200; i++)
	{//判断100到200内的素数 
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)//判断数i在2到i-1之间是否存在因子 
				break;
		}
		if (j == i)
		{
			printf("%d \n", i);
		}
	}
	return 0;
}

