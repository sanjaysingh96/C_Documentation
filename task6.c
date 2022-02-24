#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,x1,x2;
	printf("Enter Three numbers : ");
	scanf("%f%f%f",&a,&b,&c);
	x1=(-b+sqrt(b*b-(4*a*c)))/(2*a);
	x2=(-b-sqrt(b*b-(4*a*c)))/(2*a);
	printf("Roots of Quadratic = %.2f  %.2f",x1,x2);
}
