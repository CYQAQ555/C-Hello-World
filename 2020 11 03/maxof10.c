#include<stdio.h>

int main()
{
	int a[10] = {};
	printf("������10��������\n");
	int i;
	for (i = 0;i < 10;i++)
	{	
		scanf("%d",&a[i]);//����ʮ���������θ������� 
	}
	int max = 0;
	for (i = 0;i < 10;i++)
	{
		if (a[i] > max)
		{
			max = a[i];//�����������max 
		}
	}
	printf("max=%d\n",max);
	return 0;
}
