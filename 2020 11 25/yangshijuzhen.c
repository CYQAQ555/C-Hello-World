#include<stdio.h>
#define ROW 3//定义行和列
#define COL 3

int Find(int a[ROW][COL], int x)//查找函数 
{
    int i = 0;      
    int j = COL - 1;
    while(1)
    {
        int temp = a[i][j]; 
        if(temp = x)
            return 1;//找到了 
        else if(temp > x && j >= 0)//数比x大
            temp = a[i--][j];
        else if(temp < x && j >= 0)//数比x小
            temp = a[i][j++];
        else
            return 0;       //没找到
    }
}
int  main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};//定义一个杨氏矩阵 
    printf("请输入要查找的数：");
    int x=0;
    scanf("%d",&x);
    if(Find(a,x))
    {
        printf("此数存在\n");
    }
    else
    {
        printf("此数不存在\n");
    }
    return 0;
}



