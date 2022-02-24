//WAP to swap two number without using third variable
#include<stdio.h>
main()
{
	int a,b;
	printf("Enter The value of a and b : ");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The value of a is =%d\n",a);
	printf("The value of b is =%d\n",b);
}
