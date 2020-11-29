#include <stdio.h>
#include <string.h>
#include <assert.h>

int MyStrlen(const char *pstr)
{
	assert(pstr != NULL);
	int count = 0;
	while(*pstr)
	{
		count++;
		pstr++;
	}
	return count;
}
int main()
{
	char str[] = "abcdef";
	char *pstr = str;
	//printf("%d\n",MyStrlen(NULL));
	printf("%d\n",MyStrlen(pstr));
	return 0;
}
