#include<stdio.h>

int main()
{
  	int a[5] = {5, 4, 3, 2, 1};
  	int *ptr = (int *)(&a + 1);
  	printf( "%d,%d", *(a + 1), *(ptr - 1));
  	return 0;
}

