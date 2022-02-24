//WAP to convert given given number of days to a measure of time given in years
#include<stdio.h>
int main()
{
	int a,y,w,d,rem;
	printf("Enter days : ");
	scanf("%d",&a);
	y=a/365;
	printf("Year : %d\n",y);
	rem=a%365;
	w=rem/7;
	printf("Weeks : %d\n",w);
	d=rem%7;
	printf("Days : %d\n",d);
	return(0);
}
