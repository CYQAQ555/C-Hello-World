#include <stdio.h>
#include <string.h>
int i,j,k;
char s;
char a[20],token[20];
int letter()
{
	if((s>=97)&&(s<=122))
		return 1;
	else
		return 0;
}
int Digit()
{
	if((s>=48)&&(s<=57))
		return 1;
	else
		return 0;
}
void get()
{
	s=a[i];
	i=i+1;
}
void retract()
{
	i=i-1;
}
int lookup()
{
	if(strcmp(token,"while")==0)
		return 1;
	else if(strcmp(token,"if")==0)
		return 2;
	else if(strcmp(token,"else")==0)
		return 3;
	else if(strcmp(token,"switch")==0)
		return 4;
	else if(strcmp(token,"case")==0)
		return 5;
	else 
		return 0;
}

void main()
{
	printf("please input you source program,end('#'):\n");
	i=0;
	do
	{
		i=i+1;
		scanf("%c",&a[i]);
	}while(a[i]!='#');
	i=1;
	memset(token,0,sizeof(char)*10);
	j=0;
	get();
	while(s!='#')
	{
		if(s==' '||s==10||s==13)
			get();
		else
		{
			switch(s)
			{
			case'a':
			case'b':
			case'c':
			case'd':
			case'e':
			case'f':
			case'g':
			case'h':
			case'i':
			case'j':
			case'k':
			case'l':
			case'm':
			case'n':
			case'o':
			case'p':
			case'q':
			case'r':
			case's':
			case't':
			case'u':
			case'v':
			case'w':
			case'x':
			case'y':
			case'z':
			while(Digit()||letter())
			{
				token[j]=s;
				j=j+1;
				get();
			}
			retract();
			k=lookup();
			if(k==0)
				printf("(6,%s)\n",token);
			else
				printf("(%d,null)\n",k);
			break;
			case'0':
			case'1':
			case'2':
			case'3':
			case'4':
			case'5':
			case'6':
			case'7':
			case'8':
			case'9':
			while(Digit())
			{
				token[j]=s;
				j=j+1;
				get();
			}
			retract();
			printf("(%d,%s)\n",7,token);
			break;
			case'+':
				printf("(+,null)\n");
				break;
			case'-':
				printf("(-,null)\n");
				break;
			case'*':
				printf("(*,null)\n");
				break;
			case'<':
				get();
				if(s=='=')
					printf("(relop,LE)\n");
				else
				{
					retract();
					printf("(relop,LT)\n");
				}
				break;
			case'=':
				get();
				if(s=='=')
					printf("(relop,EQ)\n");
				else
				{
					retract();
					printf("(=,null)\n");
				}
				break;
			case';':
				printf("(;,null)\n");
				break;
			default:
				printf("(%c,error)\n",s);
				break;
			}
			memset(token,0,sizeof(char)*10);
			j=0;
			get();
		}
	}
}

