//WAP to Convert temperature from c to f using switch
#include<stdio.h>
main()
{
	int a;
	float c,f,res;
	printf("Enter Your Choice  1 0r 2 : ");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("Enter Tempeture in C : ");
			scanf("%f",&c);
			res=((9*c)/5)-32;
			printf(" F is =%f",res);
		break;
		case 2:
			printf("Enter Tempeture in F : ");
			scanf("%f",&f);
			res=((f-32)*5)/9;
			printf("C is =%f",res);
		break;
			
	}
}
