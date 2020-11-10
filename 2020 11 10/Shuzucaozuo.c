/*实现函数init() 初始化数组为全0
实现print()  打印数组的每个元素
实现reverse()  函数完成数组元素的逆置。*/
#include <stdio.h>

void init(int arr[],int sz)
{
	int i = 0;
	for(i = 0;i < sz;i++)
	{
		arr[i] = 0;
	}
}
void print(int arr[],int sz)
{
	int i = 0;
	for(i = 0;i < sz;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void reverse(int arr[],int sz)
{
	int i = sz-1;
	for(i = sz-1;i >= 0;i--)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = {1,3,5,84,21,64,11,55,12,0};
	int sz = sizeof(arr)/sizeof(arr[0]);
	//init(arr,sz);
	print(arr,sz);
	reverse(arr,sz);
	return 0;
}
