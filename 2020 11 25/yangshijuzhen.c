#include<stdio.h>
#define ROW 3//�����к���
#define COL 3

int Find(int a[ROW][COL], int x)//���Һ��� 
{
    int i = 0;      
    int j = COL - 1;
    while(1)
    {
        int temp = a[i][j]; 
        if(temp = x)
            return 1;//�ҵ��� 
        else if(temp > x && j >= 0)//����x��
            temp = a[i--][j];
        else if(temp < x && j >= 0)//����xС
            temp = a[i][j++];
        else
            return 0;       //û�ҵ�
    }
}
int  main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};//����һ�����Ͼ��� 
    printf("������Ҫ���ҵ�����");
    int x=0;
    scanf("%d",&x);
    if(Find(a,x))
    {
        printf("��������\n");
    }
    else
    {
        printf("����������\n");
    }
    return 0;
}



