//WAP to find compound intrest
#include<stdio.h>
#include<math.h>
main()
{
	float p,r,n,a;
	printf("Enter principle value : ");
	scanf("%f",&p);
	printf("Enter rete : ");
	scanf("%f",&r);
	printf("Enter Duration : ");
	scanf("%f",&n);
	a=p*(pow((1+r/100),n));
	printf("Compound intrest = %.2f",(a-p));
}
