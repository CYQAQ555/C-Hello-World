#ifndef _GAME_H_
#define _GAME_H_
#include <stdio.h>
#include <Windows.h>
#define ROW 3
#define COL 3

void InitBoard(char board[][COL],int row,int col);

void ShowBoard(char board[][COL], int row, int col);

void PlayerMove(char board[][COL], int row, int col);

void ComputerMove(char board[][COL], int row, int col);

char IsWin(char board[][COL], int row, int col);

#endif//预防头文件重复引用