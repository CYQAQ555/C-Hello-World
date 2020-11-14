#include <stdio.h>

int main()
{
	unsigned long pulArray[] = {6,7,8,9,10};
	unsigned long *pulPtr;
	pulPtr = pulArray;
	*(pulPtr + 3) += 3;
	printf("%d,%d\n",*pulPtr, *(pulPtr + 3));
	return 0;
}

