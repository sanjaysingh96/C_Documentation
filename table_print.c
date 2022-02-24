// WAP to print the table of the given number
#include<stdio.h>
main()
{
	int a,n=1,b;
	printf("Enter the Value of : ");
	scanf("%d",&a);
	while(n<=10)
	{
		b=a*n;
		printf("%d * %d =%d\n",a,n,b);
		n++;
	}
}
