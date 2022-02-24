// WAP to find sum and average to  of ten  number using loop
#include<stdio.h>
main()
{
	int n,sum=0,i;
	float avg;
	printf("Enter 10 numbers\n");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&n);
		sum=sum+n;
	}
	avg=(float)sum/10; // here typecasting is used
	printf("Sum=%d\n",sum);
	printf("Average=%.2f\n",avg);
}
