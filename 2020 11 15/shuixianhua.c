#include <stdio.h>
#include <math.h>

void Narcissus()//判断这个数是不是水仙花数
{
	int i; 
	for (i = 0; i <= 100000; i++)//判断每个数的位数
	{
		int count = 1;//count表示位数
		int t = i;//用t表示这个数
		while (t / 10)
		{
			count++;
			t /= 10;
		}
		t = i;//重新给t赋值
		int sum = 0;//求和
		while(t)
		{
			sum += pow(t % 10, count);//对t的每一位求count次方再求和
			t /= 10;
		}
		if (i == sum)//判断求和等于数本身
		{
			printf("%d ", sum);
		}
	}
}
int main()
{
	printf("0到100000的水仙花数为:\n");
	Narcissus();
	return 0;
}
