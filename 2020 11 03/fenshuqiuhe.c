#include <stdio.h>
int main()
{
	int i,j;
 	float a;
 	float b = 0.0,c = 0.0;
 	for(i = 1;i < 100;i += 2)
	{
  		b = b + 1.0 / i;//1+1/3+1/5+...+1/99 
 	}
 	for(j = 2;j < 101;j += 2)
	{
  		c = c + 1.0 / j;//1/2+1/4+1/6+...+1/100
 	}
 	a = b - c;//1/1-1/2+1/3-1/4+1/5+...+1/99-1/100=(1+1/3+1/5+...+1/99)-(1/2+1/4+1/6+...+1/100)
    printf("%f",a); 
 	return 0;
}