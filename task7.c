#include<stdio.h>
void main()
{
	float a,b,amou;
	printf("Enter Unit : ");
	scanf("%f",&a);
	if(a<=150)
	{
		amou=a*2.40;
	}
	else if(a<=300)
	{
		b=a-150;
		amou=(b*3.00)+(150*2.40);
	}
	else
	{
		b=a-300;
		amou=(b*3.20)+(150*2.40)+(150*3.00);
	}
	printf("Bill = %.2f",amou);
	//getch();
}
