#include <stdio.h>
#include <string.h>

char* Mystrncat(char *dest, char *src, int len)
{//��Դ�ַ���ƴ�ӵ�Դ�ַ�������
    char *cp = dest;
    while (*cp)
        cp++;
    while ((*src != '\0') && (len--))
        *cp++ = *src++;
    *cp = '\0';
    return dest;
}
int rotate()
{
    char str1[20] = "AABCD";
    char str2[10] = "BCDAA";
    char *ret=NULL;
    if (strlen(str1) == strlen(str2))//�ж������ַ����Ƿ񳤶�һ��
    {
        Mystrncat(str1, str1, strlen(str1));//��Դ�ַ���ƴ�ӵ�Դ�ַ������� 
        ret = strstr(str1, str2);//����Ŀ���ַ����ǲ���ƴ�ӹ���Դ�ַ������Ӵ�
        if (ret != NULL)
            return 1;//�ҵ��� 
        else return 0;//û�ҵ� 
    }
    else return 0;//���Ȳ�һ���Ͳ�������Դ�ַ�����ת��Ľ��
}
int main()
{
    int ret = rotate();
    printf("%d\n",ret);
    return 0;
}

