#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
/*�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
����Ϊ4�����ɷ��Ĺ���:
A˵�������ҡ�
B˵����C��
C˵����D��
D˵��C�ں�˵
��֪3����˵���滰��1����˵���Ǽٻ���
�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�*/
void murder()
{
	int i;
		for (i = 'A'; i <= 'D'; i++)
		{
			if ((i != 'A') + (i == 'C') + (i == 'D') + (i != 'D') == 3)
			{
				printf("ɱ���� %c\n", i);
			}
		}
}
int main()
{
	murder();
	system("pause");
	return 0;
}