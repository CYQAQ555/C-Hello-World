#include <stdio.h>
#include <assert.h>

char *MyStrcpy(char *dest,const char *src)
{//�ַ�������
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
	MyStrcpy(dest, src);//����ֵ��Ŀ�ĵصĵ�ַ��Ϊ��֧����ʽ���ʽ
	printf("%s\n", dest);
	return 0;
}
