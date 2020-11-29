#include <stdio.h>
#include <assert.h>

char *MyStrcpy(char *dest,const char *src)
{//字符串复制
	assert(dest != NULL && src != NULL);
	char *p = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return p;
}


int main()
{
	char dest[10] = { 0 };
	char *src = "abcdef";
	MyStrcpy(dest, src);//返回值是目的地的地址，为了支持链式表达式
	printf("%s\n", dest);
	return 0;
}
