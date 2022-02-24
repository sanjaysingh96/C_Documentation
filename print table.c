// WAP to print the table of given number 
#include<stdio.h>
main()
{
	int n,i,t;
	printf("Enter a number to print table : ");
	scanf("%d",&n);
	i=1;
	while(i<=10)
	{
		t=n*i;
		printf("%d*%d=%d\n", n,i,t);
		i++;
	}
}
