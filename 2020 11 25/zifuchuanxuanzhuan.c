#include <stdio.h>
#include <string.h>

char* Mystrncat(char *dest, char *src, int len)
{//把源字符串拼接到源字符串后面
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
    if (strlen(str1) == strlen(str2))//判断两个字符串是否长度一样
    {
        Mystrncat(str1, str1, strlen(str1));//把源字符串拼接到源字符串后面 
        ret = strstr(str1, str2);//查找目标字符串是不是拼接过后源字符串的子串
        if (ret != NULL)
            return 1;//找到了 
        else return 0;//没找到 
    }
    else return 0;//长度不一样就不可能是源字符串旋转后的结果
}
int main()
{
    int ret = rotate();
    printf("%d\n",ret);
    return 0;
}

