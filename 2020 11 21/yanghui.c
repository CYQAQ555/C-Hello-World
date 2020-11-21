#include <stdio.h>
 
int YangHui(int arr[10][10])
{
	int i = 0;
	for(i = 0; i < 10; i++)
	{
		int m = 0;
		int j = 0;
		for(j = 0; j <= i; j++)
		{
			if((0 == j)||(i == j))//存放最外层的1 
			{
				arr[i][j] = 1;	 
			}
			else//存放内层的数，下层的数等于上层两数之和 
			{
				arr[i][j] = arr[i-1][j] + arr[i-1][j-1];	 
			}
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}	
	return 0;
} 
int main()
{
	int arr[10][10] = {0};
	YangHui(arr);
	return 0;
}  
