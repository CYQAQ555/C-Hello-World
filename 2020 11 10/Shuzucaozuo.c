/*ʵ�ֺ���init() ��ʼ������Ϊȫ0
ʵ��print()  ��ӡ�����ÿ��Ԫ��
ʵ��reverse()  �����������Ԫ�ص����á�*/
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
