#include<stdio.h>
void main()
{
	float a,b,bill;
	printf("Enter No of units : ");
	scanf("%f",&a);
	if(a<=150)
	{
		bill=a*2.40;
	}
	else if(a<=300)
	{
		b=a-150;
		bill=(b*3.00)+(150*2.40);
	}
	else
	{
		b=a-300;
		bill=(b*3.20)+(150*2.40)+(150*3.00);
	}
	printf("Electricity Bill = %.2f",bill);
}
