//WAP to check given number is even or odd by using conditional operator
#include<stdio.h>
main()
{
	int num;
	printf("Enter Any Number : ");
	scanf("%d",&num);
	(num%2==0)?printf("%d is even",num):printf("%d is odd",num);
}
