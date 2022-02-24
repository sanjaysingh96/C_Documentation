//WAP to make simple calculator using switch
#include<stdio.h>
main()
{
	char op;
	float a,b,res;
	printf("Enter an expression : ");
	scanf("%f%c%f",&a,&op,&b);
	switch(op)
	{
		case '+':
			res=a+b;
			printf("sum is = %.2f",res);
			break;
		case '-':
			res=a-b;
			printf("sub is = %.2f",res);
			break;
		case '*':
			res=a*b;
			printf("mul is = %.2f",res);
			break;
		case '/':
			res=a/b;
			printf("div is = %.2f",res);
			break;
	}
}
