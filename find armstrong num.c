//WAP to check given number is armstrong or not
#include<stdio.h>
#include<math.h>
main()
{
	int num,temp,sum=0,rem;
	printf("Enter a number : ");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
	rem=num%10;
	sum=sum+pow(rem,3);
	num=num/10;	
	}
	if(temp==sum)
	{
		printf("Number is Armstromg :\n");
	}
	else
	{
		printf("Number is not armstrong\n");
	}
}
