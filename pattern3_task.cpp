/*
					1
				  2	  2
				3	3	3
			  4   4   4   4
			5   5   5   5   5
*/
#include<stdio.h>
main()
{
	int i,j,n;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}
				
