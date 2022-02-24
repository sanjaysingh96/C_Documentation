#include<stdio.h>
void main()
{
	int x,y;
	printf("Enter the value of x and y : ");
	scanf("%d%d",&x,&y);
	if(x>0 && y>0)
	{
		printf("coordinate x and y is 1st quardant(%d,%d) \n",x,y);
	}
	else if(x<0 && y>0)
	{
		printf("coordinate -x and y is 2nd quardant (%d,%d)\n",x,y);
	}
	else if(x<0 && y<0)
	{
		printf("coordinate -x and -y is 3rd quardant(%d,%d)\n",x,y);
	}
	else
	{
	printf("coordinate x and -y is 4th quardant(%d,%d)\n",x,y);
	}
}
