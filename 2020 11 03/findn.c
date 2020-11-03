#include <stdio.h>

int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int len = sizeof(arr)/sizeof(arr[0]);
	int key = 6;
	int left = 0;
	int right = len - 1;
	while(left <= right)
	{
		int mid = (left + right) / 2;
		if(arr[mid] < key)
		{
			left = mid + 1;
		}
		else if(arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			printf("%d\n",mid);
			break;
		}
	}
	if(left <= right)
	{
		printf("找到了\n"); 
	}	
	else
	{
		printf("找不到\n");
	}	
}

