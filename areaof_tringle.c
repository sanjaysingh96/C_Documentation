//WAP to print area of tringle
#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,s,area=0;
	printf("Enter the value of a,b and c : ");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of Tringle of = %f",area);
}
