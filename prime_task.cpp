//Write a c program to print the serirs of prime numbers from 1-100
#include<stdio.h>
main()
{
	int num,i,j;
	printf("Enter a number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		int cou=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				cou++;
			}
		}
		
		if(cou==2)
		{
			printf("%d\n",i);
		}
	}
}
