#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void Menu() 
{
	printf("**************************\n");
	printf("**********1.开始**********\n");
	printf("**********0.退出**********\n");
	printf("**************************\n");
}
void Fun() 
{
	int x;
	int random_num = rand() % 100 + 1;//产生随机整数
	while (1) 
	{
		printf("请输入您猜的数字\n");
		scanf("%d", &x);
		if (x > random_num) {
			printf("高了\n");
		}
		else if (x < random_num) {
			printf("低了\n");
		}
		else {
			printf("猜对了\n");
			break;
		}
	}
}
int main() {
	int num;
	srand((unsigned)time(NULL));//用时间戳来改变每次产生的随机数序列 
	Menu();
	printf("请选择>:"); 
	scanf("%d", &num);
	//system("cls");
	if (num == 1)
	{
		Fun();
	}
	else if (num == 0) 
	{
		printf("再见！\n");
	}
	else
	{
		printf("输入错误！\n");
	}
	return 0;
}


