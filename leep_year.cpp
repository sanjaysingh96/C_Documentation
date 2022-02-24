//leep year
#include<stdio.h>
main()
{
	int year;
	{
		printf("Enter a number to chech leep year : ");
		scanf("%d",&year);
		if(year%4==0)
		{
			printf("%d is leep year :",year);
		}
		else 
		{
			printf("%d is not leep year :",year);
		}
	}
}
