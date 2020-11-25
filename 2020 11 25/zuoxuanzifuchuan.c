#include <stdio.h>
#include <assert.h>

void rotate(char *src, int k)
{
	int tmp;	
	assert(src != NULL);//���Է�ֹ����Ϊ�� 
	while (k--)//��תk���ַ���ִ��k��ѭ�� 
	{
		char *p = src; 
		tmp = *p; 
		while (*(p + 1) != '\0')//��'/0'��һ����ת���� 
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
	printf("������Ҫ��ת���ַ���k:\n");
	scanf("%d",&k);
	rotate(arr, k);
	printf("��ת��Ϊ:%s\n", arr);
	return 0;
}
