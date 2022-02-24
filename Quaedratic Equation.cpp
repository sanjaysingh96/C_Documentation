//Wap to find roots of quaedratic equation
#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,d,r1,r2;
	printf("Enter The Value for a,b and c : ");
	scanf("%f%f%f",&a,&b,&c);
	d=(b*b-4*a*c);
	if(d<0)
	{
		printf("Roots are imaginary\n");
	}
	else
	{
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		printf("Root1=%.2f\n",r1);
		printf("Root2=%.2f\n",r2);
	}
}
