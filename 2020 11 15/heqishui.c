#include <stdio.h>

int Drink(int money)
{
	int p =	2 * money - 1;
	return p;
} 
int main() 
{
 	int money = 20;
 	printf("���Ժ� %d ƿ��ˮ\n",Drink(money));
 	return 0;
}
