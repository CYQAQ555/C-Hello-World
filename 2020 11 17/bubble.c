#include <stdio.h>

int cmp(const void *p1,const void *p2)//比较两数大小 
{
	return (*(int *)p1 - *(int *)p2);
}

int swap(void *p1,void *p2,int sz)//交换两个数 
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		char tmp = *((char *)p1 + i);
		*((char *)p1 + i) = *((char *)p2 + i);
		*((char *)p2 + i) = tmp;
	}
}

 void bubble(void *base,int count,int sz,int(*cmp)(void *,void *))//实现冒泡排序 
{
 	int i = 0;
 	int j = 0;
 	for(i = 0; i < count - 1; i++)
 	{
 		for(j = 0;j < count - i - 1; j++)
 		{
 			if(cmp((char *)base + j*sz,(char *)base + (j + 1)*sz) > 0)
 			{
 				swap((char *)base + j*sz,(char *)base + (j + 1)*sz,sz);
			}
		}
	}
}

int main()
{
	int arr[] = {1,3,5,7,9,2,4,6,8,0};
	int i = 0;
	int count = sizeof(arr) / sizeof(arr[0]);
	int sz = sizeof(int);
	bubble(arr,count,sz,cmp);
	for(i = 0;i < count; i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	return 0;
}
