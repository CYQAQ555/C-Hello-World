#include <stdio.h>

void min(int a,int b)
{
	int i;
	for(i=1;i <= (a*b); i++)
	{
		if((i%a == 0) && (i%b == 0))
		{
			printf("%d",i);
		}
	}
} 
int main()
{
	int a,b;
	printf("输入两个整数：");
	scanf("%d %d",&a,&b);
	min(a,b);
	return 0;
}

