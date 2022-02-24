// WAP to find sum and average of ten number using loop
#include<stdio.h>
main()
{
	int i,n,num;
	float sum,avg;
	printf("Enter Number starting and ending point like as 1-10 :\n");
	printf("Enter your starting value : ");
	scanf("%d",&n);
	printf("Enter Ending value : ");
	scanf("%d",&num);
	for(i=n;i<=num;i++)
	{
		sum=sum+i;
	}
	printf("Sum Number is = %.2f\n",sum);
	avg=sum/10;
	printf("Average Numver is =%.2f",avg);
}
