#include<stdio.h>

int main()
{
	int a[10] = {};
	printf("请输入10个整数：\n");
	int i;
	for (i = 0;i < 10;i++)
	{	
		scanf("%d",&a[i]);//输入十个整数依次赋给数组 
	}
	int max = 0;
	for (i = 0;i < 10;i++)
	{
		if (a[i] > max)
		{
			max = a[i];//将最大数赋给max 
		}
	}
	printf("max=%d\n",max);
	return 0;
}
