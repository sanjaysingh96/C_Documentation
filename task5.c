#include<stdio.h>
void main()
{
	int x,y;
	printf("Enter The Value of X and Y : ");
	scanf("%d%d",&x,&y);
	if(x>0 && y>0)
	{
		printf("1st Quadrant\n");
	}
	else if(x>0 && y<0)
	{
		printf("2nd Quadrant \n");
	}
	else if(x<0 && y<0)
	{
		printf("3rd Quadrant\n");
	}
	else
	{
		printf("4th Quadrent\n");
	}
}
