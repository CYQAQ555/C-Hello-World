#include <stdio.h>
#include <math.h>

void Narcissus()//�ж�������ǲ���ˮ�ɻ���
{
	int i; 
	for (i = 0; i <= 100000; i++)//�ж�ÿ������λ��
	{
		int count = 1;//count��ʾλ��
		int t = i;//��t��ʾ�����
		while (t / 10)
		{
			count++;
			t /= 10;
		}
		t = i;//���¸�t��ֵ
		int sum = 0;//���
		while(t)
		{
			sum += pow(t % 10, count);//��t��ÿһλ��count�η������
			t /= 10;
		}
		if (i == sum)//�ж���͵���������
		{
			printf("%d ", sum);
		}
	}
}
int main()
{
	printf("0��100000��ˮ�ɻ���Ϊ:\n");
	Narcissus();
	return 0;
}
