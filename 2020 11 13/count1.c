#include <stdio.h>

int main()
{
	int num = 15;
	int i = 0;
	int count = 0;
	while(num)
	{
		count++;
		num = num & (num - 1);
	} 
	printf("%d¸ö1\n",count);
	return 0;
} 
