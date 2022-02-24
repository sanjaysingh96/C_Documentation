// WAP to find sum and average of ten number using loop
#include<stdio.h>
main()
{
	int i;
	float sum,avg;
	printf("Enter Any 10 Numbers : \n");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&i);
		sum=sum+i;
	}
	printf("Sum Number is = %.2f\n",sum);
	avg=sum/10;
	printf("Average Numver is =%.2f",avg);
}
