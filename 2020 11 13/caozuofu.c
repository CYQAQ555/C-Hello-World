/*编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
输入例子:
1999 2299
输出例子:7*/
//可以先将两个数按位异或，然后再统计异或后的数中的一的个数
//统计异或后1的个数，则需要把这个数循环按位于比它小1的数，直到这个数为0为止
#include <stdio.h>

int count(int x)//记录1的个数 即不同的位数 
{
	int count = 0;
	while (x)
	{
		x = x&(x - 1); 
		count++;
	}
	return count;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入两个数：\n", a, b);
	scanf("%d %d", &a, &b);
	c = a ^ b;//按位异或得到两个数中不同的比特位
	int x = count(c);
	printf("%d\n",x);
	return 0;
}
