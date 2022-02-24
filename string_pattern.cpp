//a char array to hold the string and print a single char at a time
#include<stdio.h>
#include<string.h>
main()
{
	char arr[]="sanjay";
	int len=strlen(arr);
	int i,j;
	for(i=0;i<len;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",arr[j]);
		}
		printf("\n");
	}
}
