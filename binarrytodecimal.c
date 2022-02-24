//WAP to print binary to decimal number
#include<stdio.h>
main()
{
	int dec=0,bin,rem,base=1;				//base= 1 2 4 8 16 32 ;
	printf("Enter the value of : ");
	scanf("%d",&bin);
	while(bin>0)
	{
		rem=bin%10;
		dec=dec+base*rem;
		base=base*2;
		bin=bin/10;
	 }
	 printf("Decimal Number is = %d",dec);
}
