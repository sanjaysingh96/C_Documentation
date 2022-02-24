#include<stdio.h>
void main()
{
	int x,y;
	printf("Enter the value for x and y : ");
	scanf("%d%d",&x,&y);
	if(x>0 && y>0)
	{
		printf("First Quadrent \n");
	}
	else if(x<0 && y>0)
	{
		printf("Secomd Quadrent\n");
	}
	else if(x<0 && y<0)
	{
		printf("Third Quadrent\n");
	}
	else if(x>0 && y<0)
	{
		printf("Fourth Quadrent\n");
	}
	else 
	{
		printf("center");
	}
}
