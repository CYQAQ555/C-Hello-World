#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("******************\n");
	printf("******0.exit******\n");
	printf("******1.play******\n");
	printf("******************\n");
}
void game()//开始游戏
{
	char board[ROW][COL] = { 0 };//设置棋盘数组
	InitBoard(board, ROW, COL);
	ShowBoard(board, ROW, COL);//绘制棋盘
	int ret = 0;
	while (1)
	{
		PlayerMove(board, ROW, COL);//玩家走
		ShowBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != ' ')//判断是否有人赢了
		{
			break;//肯定有一个人赢了
		}
		ComputerMove(board, ROW, COL);//电脑走
		ShowBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != ' ')//判断是否有人赢了
		{
			break;//肯定有一个人赢了
		}
	}

	if (ret == ' Q')//判断是否平局
	{
		printf("平局\n");
		return;
	}
	if (ret == 'X')
	{
		printf("玩家赢\n");
		return;
		
	}
	if (ret == 'O')
	{
		printf("电脑赢\n");
		return;
		
	}
}

int main()
{
	int input = 0;
	menu();//引入菜单栏  
	printf("请输入你的操作：\n");
	scanf("%d", &input);
	do
	{
		switch (input)//进行选择是否玩游戏 
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			break;
		}
	} while (input);
	system("pause");
	return 0;
}