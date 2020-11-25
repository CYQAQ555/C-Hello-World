#include <stdio.h>
#include <assert.h>

void rotate(char *src, int k)
{
	int tmp;	
	assert(src != NULL);//断言防止传参为空 
	while (k--)//旋转k个字符则执行k次循环 
	{
		char *p = src; 
		tmp = *p; 
		while (*(p + 1) != '\0')//到'/0'则一次旋转结束 
		{
		    *p = *(p + 1);
		    p++;
		}
		*p = tmp;
	}
}
int main()
{
	char arr[] = "ABCD";
	int k = 0;
	printf("请输入要旋转的字符数k:\n");
	scanf("%d",&k);
	rotate(arr, k);
	printf("旋转后为:%s\n", arr);
	return 0;
}
