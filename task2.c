// WAP to calculate simple intrest
#include<stdio.h>
#include<stdlib.h>
int main()
{
	float p,n,r,si;
	printf("Enter Principle amount : ");
	scanf("%f",&p);
	printf("Enter Time : ");
	scanf("%f",&n);
	printf("Enter Rate : ");
	scanf("%f",&r);
	si=(p*n*r)/100;
	printf("Simple Intrest = %f",si);
	return(0);
}
