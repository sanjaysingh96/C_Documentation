//WAP to convert temperature from C to F and F to C based on user choice.
#include<stdio.h>
main()
{
	float c,f;
	int ch;
	printf("Enter 1 for C to F\n");
	printf("Enter 2 for F to C\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter tempreature in C : ");
			scanf("%f",&c);
			f=(9*c)/5+32;
			printf("Temprature in f=%.2f\n",f);
			break;
		case 2:
			printf("Enter temprature in F :");
			scanf("%f",&f);
			c=(f-32)*5/9;
			printf("Temprature in f=%.2f\n",c);
			break;
		default:
			printf("Invalid correct number\n");
			break;
	}
}
