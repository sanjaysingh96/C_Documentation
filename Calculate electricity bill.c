// Calculate Electricity Bill
#include<stdio.h>
main()
{
	int unit;
	float bill;
	printf("Enter Number of units consumed : ");
	scanf("%d",&unit);
	if(unit<=150)
	{
		bill=unit*2.40;
	}
	else if(unit>150 && unit<=300)
	{
		bill=(150*2.40)+(unit-150)*3.00;
	}
	else
	{
		bill=(150*2.40)+(150*3.00)+(unit-300)*3.20;
	}
	printf("Bill=%.2f\n",bill);
}
