#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <Windows.h>
/*日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
以下为4个嫌疑犯的供词:
A说：不是我。
B说：是C。
C说：是D。
D说：C在胡说
已知3个人说了真话，1个人说的是假话。
现在请根据这些信息，写一个程序来确定到底谁是凶手。*/
void murder()
{
	int i;
		for (i = 'A'; i <= 'D'; i++)
		{
			if ((i != 'A') + (i == 'C') + (i == 'D') + (i != 'D') == 3)
			{
				printf("杀手是 %c\n", i);
			}
		}
}
int main()
{
	murder();
	system("pause");
	return 0;
}