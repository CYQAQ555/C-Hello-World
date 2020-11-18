#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
char a[20],optr[10],s,op;
int i,j,k,opnd[10],x1,x2,x3;

int operand(s)
{
	if((s>=48) && (s<=57))
		return (1);
	else
		return (0);
}

int f(s)
{
	switch(s)
	{
		case'+' :return (4);
		case'-' :return (4);
		case'*' :return (6);
		case'/' :return (4);
		case'(' :return (2);
		case')' :return (6);
		case'#' :return (0);
		default:printf("error!\n");
		}
	}
int g(s)
{
	switch(s)
	{
		case'+':return(3);
		case'-':return(3);
		case'*':return(5);
		case'/':return(5);
		case'(':return(7);
		case')':return(2);
		case'#':return(0);
		default:printf("error!\n");
	}
}
void get()
{
	s = a[i];
	i = i+1;
}
int main()
{
	printf("please input your expression:\n");
	i=0;
	do
	{
		i=i+1;
		scanf("%c",&a[i]);
	}
	while (a[i]!='#');
	i=1;j=k=1;
	optr[j]='#';
	get();
	while(!((optr[j]=='#'&&(s=='#'))))
	{
		if(operand(s))
		{
			opnd[k]=s-48;
			k=k+1;
			get();
		}
		else if(f(optr[j]>g(s)))
		{
			op=optr[j];
			j=j-1;
			x1=opnd[k-1];
			x2=opnd[k-1];
			k=k-1;
			switch(op)
			{
				case'+':x3=x1+x2;
					break;
				case'*':x3=x1*x2;
					break;
				case'-':x3=x1-x2;
					break;
				case'/':x3=x1/x2;
			}
			opnd[k]=x3;
			k++;
		}
		else if(f(optr[j]<g(s)))
		{
		    	j=j+1;
			optr[j]=s;
			get();
		}
		else if(f(optr[j]==g(s)))
		{
			if(optr[j]=='('&&')')
			{
				j=j-1;
				get();
			}
			else printf("error!!!\n");
		}
  		else printf("error!!!\n"); 
		return 0;
	}
}
