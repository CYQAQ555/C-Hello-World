#include <stdio.h>

void Change(int a[],int b[],int sz)
{
	int i = 0;
	int c[100];
	for(i = 0;i < sz;i++) 
	{
		c[i] = a[i];
		a[i] = b[i];
		b[i] = c[i];
	}
}
int main()
{
	int a[] = {1,2,3,4,5,6,7,8};
	int b[] = {2,4,6,8,10,12,14,16};
	int sz = sizeof(a)/sizeof(a[0]);
	Change(a,b,sz);
	int i = 0;
	printf("a数组的数为：");
	for(i = 0;i < sz;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nb数组的数为：");
	for(i = 0;i < sz;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}
