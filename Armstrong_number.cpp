//WAP to check given number is armstrong or not
#include<stdio.h>
#include<math.h>
main()
{
	int a,r,res=0,temp;
	printf("Enter Three Numbers : ");
	scanf("%d",&a);
	temp=a;
	while(a>0)
	{
		r=a%10;
		res=res+pow(r,3);
		a=a/10;
	}
//	printf("%d",res);
	if(res==temp)
	{
		printf("%d Number is Armstrong = %d",temp,res);
	}
	else
	{
		printf("%d != %d number is not Armstrong = %d",temp,temp,res);
	}
}
