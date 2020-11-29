#include <stdio.h>
#include <assert.h>

char *MyStrstr(char *str1,char *str2)
{
	char *start = str1;
	while(*start != '\0')
	{
		char *s1 = start;
		char *s2 = str2;
		while(*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if(*s2 == '\0')
		{
			return start;
		}
		start++;
	}
	return NULL;
}

int main()
{
	char *str1 = "heaabcdef";//Ö÷´® 
	char *str2 = "abc";//×Ó´® 
	char *p = MyStrstr(str1,str2);
	printf("%s\n",p);
	return 0;
}
