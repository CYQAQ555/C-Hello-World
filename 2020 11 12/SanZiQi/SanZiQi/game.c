#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char board[][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void ShowBoard(char board[][COL], int row, int col)//画棋盘
{
	printf("****************************\n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);//打印空格
			if (j < col - 1)
			{
				printf("|");//打印竖线
			}
		}
		printf("\n");
		//--- 控制行数
		if (i < row - 1)
		{
			//循环控制---的列数
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
	printf("****************************\n");
}

void PlayerMove(char board[][COL], int row, int col)//玩家放棋子
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入你的1-3坐标：\n");
		scanf("%d%d", &x, &y);//1 3 --> 0  2
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (board[x - 1][y - 1] == ' ')//没放过棋子则放入
			{
				board[x - 1][y - 1] = 'X';
				break;
			}
		}
		else
		{
			printf("坐标不合法，请重新输入：\n");//若放过棋子则报错
		}
	}
}

void ComputerMove(char board[][COL], int row, int col)//电脑下棋子
{
	while (1)
	{
		printf("电脑落子：\n");
		int x = rand() % ROW;//随机生成放置棋子的下标
		int y = rand() % COL;
		if (board[x][y] == ' ')//若此处没放过棋子则放入
		{
			board[x][y] = 'O';
			break;
		}
	}
}

char IsWin(char board[][COL], int row, int col)//赢的情况分三种
{
	for (int i = 0; i < row; i++)
	{
		//三个棋子在一行
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] &&
			board[i][0] != ' ')
		{
			return board[i][0];
		}
		//三个棋子在一列
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] &&
			board[0][i] != ' ')
		{
			return board[0][i];
		}

		//三个棋子在对角线
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] &&
			board[0][0] != ' ')
		{
			return board[0][0];
		}

		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] &&
			board[0][2] != ' ')
		{
			return board[0][2];
		}

		//是否是平局->棋盘里面已经放满了
		if (IsFull(board, row, col) == 1)
		{
			return 'Q';//证明是平局
		}
	}
	return ' ';//代表没有人赢
}

static int IsFull(char board[][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//没有满
			}
		}
	}
	return 1;//满
}