#include <stdio.h>
#include <string.h>
#include <assert.h>

char *MyStrcat(char *dest,const char *src)
{//×Ö·û´®Æ´½Óº¯Êý 
	assert(dest);
	if(src == NULL)
	{
		return dest;
	}
	char *p = dest;
	while(*dest != '\0')
	{
		dest++;
	}
	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return p;
}
int main()
{
	char dest[20] = "abcdef";
	char *src = "helloworld";
	MyStrcat(dest,src);
	printf("%s\n",dest);
	return 0;
}
