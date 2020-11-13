#include <stdio.h>

int main()
{
	int a = 2;//0000 0010
	int b = 3;//0000 0011
	a = a ^ b;//0000 0001
	b = a ^ b;//0000 0010
	a = a ^ b;//0000 0011
	printf("a = %d,b = %d",a,b);
	return 0;	
 } 
