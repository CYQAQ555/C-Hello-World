#include <stdio.h>

int main()
{
    int i = 0;
    int count = 0;
    for (; i < 100; i++)
    {
        if (9 == i % 10)//�������и�λΪ9�� 
        {
            count++;
        }
        if (9 == i / 10)//��������ʮλΪ9��							
        {
            count++;
        }
    }
    count = count - 1;//99�ظ�����һ�� 
    printf("1�� 100 �����������г���%d������9\n", count);
    return 0;
}

