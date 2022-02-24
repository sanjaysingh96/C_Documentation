//WAP  to take day number as input and display day name using switch.
#include<stdio.h>
main()
{
	int a;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("Monday :");
			break;
		case 2:
			printf("Tuesday :");
			break;
		case 3:
			printf("wednesday :");
			break;
		case 4:
			printf("Thusday :");
			break;
		case 5:
			printf("Friday :");
			break;
		case 6:
			printf("Saturday :");
			break;
		default:
			printf("Sunday :");
			break;		
	}
}
