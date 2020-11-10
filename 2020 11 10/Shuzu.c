#include <stdio.h>

void bubble_sort(int arr[],int sz)
{ 
	int i = 0;
	for(i = 0;i < sz-1;i++)
	{
		int j = 0;
		for(j = 0;j < sz-i-1;j++)
		{
			if(arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}

int main()
{
	int arr[] = {1,3,5,84,21,64,11,55,12,0};
    int sz = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,sz);
    int i = 0;
    for(i = 0;i < sz;i++)
    {
    	printf("%d ",arr[i]);
	}
	return 0;
}
