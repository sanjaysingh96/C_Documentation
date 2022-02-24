//WAP to make a simple caluclator
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,b,res=0;
	char op;
	printf("Enter First number : ");
	scanf("%d",&a);
	fflush(stdin);
	printf("Enter Operator : ");
	op=getchar();
	printf("Enter Second Number : ");
	scanf("%d",&b);
	switch(op)
	{
		case '+':
			res=a+b;
		break;
		case '-':
			res=a-b;
		break;
		case '*':
			res=a*b;
		break;
		case '/':
			res=a/b;
		break;
		default:
			printf("Invalid Choice : \n");
	}
	printf("%d%c%d=%d\n",a,op,b,res);
}
