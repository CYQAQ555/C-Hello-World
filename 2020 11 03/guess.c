#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void Menu() 
{
	printf("**************************\n");
	printf("**********1.��ʼ**********\n");
	printf("**********0.�˳�**********\n");
	printf("**************************\n");
}
void Fun() 
{
	int x;
	int random_num = rand() % 100 + 1;//�����������
	while (1) 
	{
		printf("���������µ�����\n");
		scanf("%d", &x);
		if (x > random_num) {
			printf("����\n");
		}
		else if (x < random_num) {
			printf("����\n");
		}
		else {
			printf("�¶���\n");
			break;
		}
	}
}
int main() {
	int num;
	srand((unsigned)time(NULL));//��ʱ������ı�ÿ�β�������������� 
	Menu();
	printf("��ѡ��>:"); 
	scanf("%d", &num);
	//system("cls");
	if (num == 1)
	{
		Fun();
	}
	else if (num == 0) 
	{
		printf("�ټ���\n");
	}
	else
	{
		printf("�������\n");
	}
	return 0;
}


