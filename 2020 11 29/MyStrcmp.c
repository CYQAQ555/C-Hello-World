#include <stdio.h>
#include <string.h>
#include <assert.h>

char *MyStrcmp(char *str1,char *str2)
{//�ַ����ȽϺ��� 
	assert(str1 && str2);
	if(str1 == NULL)
		return -1;
	if(str2 == NULL)
		return 1;
	while(*str1 == *str2)
	{
		if(*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	//���ַ�������ȹʽ��бȽ� 
	if(*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int main()
{
	char *str1 = "abcdef";
	char *str2 = "abfdef";
	int ret = MyStrcmp(str1,str2);
	/*����ֵ
	>0 STR1 > STR2 
	=0 STR1 = STR2
	<0 STR1 < STR2 */
	printf("%d",ret);
	return 0;
}
