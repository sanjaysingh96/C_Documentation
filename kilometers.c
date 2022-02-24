//WAP to convert distance given in kilometers into meters and centimeters
#include<stdio.h>
void main()
{
	float m,cm,distance;
	printf("Enter the value of Distance : ");
	scanf("%f",&distance);
	m=distance*1000;
	cm=distance*100000;
	printf("Distance in Meter is %.2f\n",m);
	printf("Distance in Centimeter is %.2f",cm);
}
