//WAP to change temperrate given in degree farenheight into degree
#include<stdio.h>
void main()
{
	float df,c;
	printf("Enter the value of Temperature : ");
	scanf("%f",&df);
	c=(5*(df-32))/9;
	printf("Temperature in degree celcius is = %f",c);
}
