#include <stdio.h>

int main()
{
    int i = 0;
    int count = 0;
    for (; i < 100; i++)
    {
        if (9 == i % 10)//挑出所有个位为9的 
        {
            count++;
        }
        if (9 == i / 10)//挑出所有十位为9的							
        {
            count++;
        }
    }
    count = count - 1;//99重复计算一次 
    printf("1到 100 的所有整数中出现%d个数字9\n", count);
    return 0;
}

