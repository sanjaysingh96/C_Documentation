//WAP to find sum of digits of given number      1+2+3=6;
#include<stdio.h>
main()
{
	int n,s=0,r;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("Sum of Digits = %d\n",s);
}
