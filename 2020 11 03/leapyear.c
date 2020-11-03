#include <stdio.h> 

int LeapYear(int x)
{
	if ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0))//闰年判断条件 
	{
		return 1;
	}
	return 0;
}
int main()
{  
	int y = 0;
	for (y = 1000; y <= 2000; y++)
	{//打印1000年到2000年之间的闰年 
		if (LeapYear(y) == 1)
		{
			printf("%d ", y);
		} 
	}
	return 0;
}

