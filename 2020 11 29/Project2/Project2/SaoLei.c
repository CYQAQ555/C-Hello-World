#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include "saolei.h"
#include <Windows.h>

char** creatMat(int row,int col)
{
	//创建一个指针数组
	char** Mat = (char**)malloc(sizeof(char *)*(row+2));//多创建2行2列方便计算边界角落的数值
	//开辟每一行元素的空间
	for (int i = 0; i < row+2; ++i)
	{
		Mat[i] = (char*)malloc(sizeof(char)*(col+2));
	}
	return Mat;
}

void intMat(char** Mat, int row, int col, char ch)
{
	for (int i = 0; i < row+2; ++i)
	{
		for (int j = 0; j < col+2; ++j)
		{
			Mat[i][j] = ch;
		}
	}
}

void setMine(char** Mat, int row, int col)//雷的位置
{
	int count = MINE_NUM;//布置雷的个数
	while (count)
	{
		//x:1`row,y:1~col
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (Mat[x][y] != '*')
		{
			Mat[x][y] = '*';
			--count;
		}
	}
}

void showMat(char** Mat, int row, int col)
{
	printf("------------------------------\n");
	//显示列
	for (int i = 0; i <= col; ++i)
	{
		printf("%d ", i);
	}
	printf("\n");
	//显示行
	for (int i = 1; i <= row; ++i)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; ++j)
		{
			printf("%c ", Mat[i][j]);
		}
		printf("\n");
	}
	printf("------------------------------\n");
}

int getMineNum(char** Mat, int row, int col, int x, int y)
{//旋转矩阵
	static int posOffset[8][2] = { { -1, -1 }, { -1, 0 }, { -1, 1 }, { 0, -1 }, { 0, 1 }, { 1, -1 }, { 1, 0 }, { 1, 1 } };
	int count = 0;
	for (int i = 0; i < 8; ++i)
	{
		int nx = x + posOffset[i][0];
		int ny = y + posOffset[i][1];
		if (Mat[nx][ny] == '*')
		{
			++count;
		}
	}
	return 0;
}

void game(char** mineMat, char** mineInfo, int row, int col)
{
	int step = 0;
	while (step < row * col - MINE_NUM)
	{
		int x, y;
		printf("请输入一个坐标：\n");
		scanf("%d%d", &x, &y);
		if (mineMat[x][y] == '*')
		{
			printf("game over！\n");
			showMat(mineMat, row, col);
			break;
		}
		//获取x，y周围雷的个数
		int num = getMineNum(mineMat, row, col, x, y);
		mineInfo[x][y] = num + '0';
		showMat(mineInfo, row, col);
		++step;//成功走了一步
	}
	if (step == row * col - MINE_NUM)
	{
		printf("win!\n");
	}
}

void test()
{
	char** mineMat = creatMat(ROW, COL);
	char** mineInfo = creatMat(ROW, COL);

	intMat(mineMat, ROW, COL, '0');
	intMat(mineInfo, ROW, COL, '*');
	setMine(mineMat, ROW, COL);
	printf("雷:");
	showMat(mineMat, ROW, COL);
	printf("雷的信息:");
	showMat(mineInfo, ROW, COL);

	game(mineMat, mineInfo, ROW, COL);
}

int main()
{
	test();
	system("pause");
	return 0;
}