#include <stdio.h>
#include <string.h>

void Reverse(char *str)
{
	int sz = strlen(str);
    int i;
    for(i = sz-1; i >= 0; i--)
	{
        printf("%c",*(str + i));//��������ַ��� 
    }
}
int main()
{
	char str[10];
	gets(str);//�����ַ��� 
    Reverse(str);
    return 0;
}
