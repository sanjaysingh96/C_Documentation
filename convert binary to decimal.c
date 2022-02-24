//WAP to convert binary number to decimal number
#include<stdio.h>
#include<math.h>
main()
{
	int num,bnum,rem,p=0,base=2,dec=0;
	printf("Enter a binary number in 0's and 1's : ");
	scanf("%d",&num); //number should not more than 5 digit
	bnum=num;
	while(num>0)
	{
		rem=num%10;
		dec=dec+rem*pow(base,p);
		num=num/10;
		p++;
	}
	printf("Binary number=%d\n",bnum);
	printf("Decimal equivalent=%d\n",dec);
}
