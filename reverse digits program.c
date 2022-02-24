// WAP to reverse the digits of given number
#include<stdio.h>
main()
{
	int num,rev=0,digit, temp;
	printf("Enter a number : ");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		digit=num%10;
		rev=rev*10+digit;
		num=num/10;
	}
//	printf("The given number=%d\n",temp);
	printf("The reverse number=%d\n",rev);
}

