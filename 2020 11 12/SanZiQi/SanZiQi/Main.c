#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("******************\n");
	printf("******0.exit******\n");
	printf("******1.play******\n");
	printf("******************\n");
}
void game()//��ʼ��Ϸ
{
	char board[ROW][COL] = { 0 };//������������
	InitBoard(board, ROW, COL);
	ShowBoard(board, ROW, COL);//��������
	int ret = 0;
	while (1)
	{
		PlayerMove(board, ROW, COL);//�����
		ShowBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != ' ')//�ж��Ƿ�����Ӯ��
		{
			break;//�϶���һ����Ӯ��
		}
		ComputerMove(board, ROW, COL);//������
		ShowBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != ' ')//�ж��Ƿ�����Ӯ��
		{
			break;//�϶���һ����Ӯ��
		}
	}

	if (ret == ' Q')//�ж��Ƿ�ƽ��
	{
		printf("ƽ��\n");
		return;
	}
	if (ret == 'X')
	{
		printf("���Ӯ\n");
		return;
		
	}
	if (ret == 'O')
	{
		printf("����Ӯ\n");
		return;
		
	}
}

int main()
{
	int input = 0;
	menu();//����˵���  
	printf("��������Ĳ�����\n");
	scanf("%d", &input);
	do
	{
		switch (input)//����ѡ���Ƿ�����Ϸ 
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			break;
		}
	} while (input);
	system("pause");
	return 0;
}