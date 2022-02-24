//WAP to reverse the digits of given number
#include<stdio.h>
main()
{
	int a,rev=0;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	while(a>0)
	{
		rev=rev*10;
		rev=rev+a%10;
		a=a/10;
	}
	printf("%d",rev);
}

