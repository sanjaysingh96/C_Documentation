//WAP to calculate area and perimeter of rectangle
#include<stdio.h>
void main()
{
	int a,l,b,p;
	printf("Enter First Number :");
	scanf("%d",&l);
	printf("Enter Second Number :");
	scanf("%d",&b);
	a=l*b;
	printf("total area is = %d\n",a);
	p=2*(l+b);
	printf("Rectangle is = %d\n",p);
}
