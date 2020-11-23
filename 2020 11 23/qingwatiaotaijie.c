#include <stdio.h>
#include <stdlib.h>
 
int jump_floor(int n)
{
	if (n < 3)
	{
		return n;
	}
	else
	{
		return jump_floor(n - 2) + jump_floor(n - 1);
	}
}
 
int main()
{
	int n = 0;
	printf("请输入跳的台阶数：");
	scanf_s("%d", &n);
	int ret=jump_floor(n);
	printf("%d\n", ret);
	return 0;
}
