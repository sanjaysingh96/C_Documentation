/*
A
BB
CCC
DDDD
EEEEE
FFFF
GGG
HH
I
*/
#include<stdio.h>
main()
{
	int i,j;
// code for upper triangle
	for(i=65;i<=77;i++)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c",i);
		}
		printf("\n");
	}
	//code for lower triangle
	for(i=78;i<=90;i++)
	{
		for(j=90;j>=i;j--)
		{
			printf("%c",i);
		}
		printf("\n");
	}
}
