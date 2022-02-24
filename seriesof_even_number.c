//WAP to print series of even numbers from 1-100
#include<stdio.h>
main()
{
	int n=2;
	while(n<=100)
	{
		if(n%2==0)
		{
			printf("%d\n",n);
		}
		n++;
	}
}
