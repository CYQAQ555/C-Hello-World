#include<stdio.h>

char* Strcpy(char* str2, char* str1)
{
	char * p = str2;
    while (*str1 != '\0')
    {
    	*str2 = *str1;
        str1++;
        str2++;
    }
    *str2 = '\0';
    return p;
}

int main()
{
    char str1[10] = "abcdef";
    char str2[10];
    printf("str2 = %s\n", Strcpy(str2, str1));
    return 0;
}

