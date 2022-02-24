//WAP to find greatest number in three unequal numbers
#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the value for a,b and c : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("Gretest number=%d\n",a);
		}
		else
		{
			printf("Gretest number=%d\n",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("Gretest number=%d\n",b);
		}
		else
		{
			printf("Gretest number=%d\n",c);
		}
	}
}
