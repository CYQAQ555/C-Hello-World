#include <stdio.h> 

int LeapYear(int x)
{
	if ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0))//�����ж����� 
	{
		return 1;
	}
	return 0;
}
int main()
{  
	int y = 0;
	for (y = 1000; y <= 2000; y++)
	{//��ӡ1000�굽2000��֮������� 
		if (LeapYear(y) == 1)
		{
			printf("%d ", y);
		} 
	}
	return 0;
}

