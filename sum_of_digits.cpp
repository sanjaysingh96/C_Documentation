#include<stdio.h>
main()
{
	int n,x,sum=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(n>0)
	{
		x=n%10;
		sum=sum+x;
		n=n/10;
	}
	printf("Sum of no is = %d",sum);
}
