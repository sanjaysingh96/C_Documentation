// check paliandrame yes or not
#include<stdio.h>
#include<string.h>
main()
{
	char a[100],b[100];
	printf("Enter the string : \n");
	gets(a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
	{
		printf("palindrome");
	}
	else
	{
		printf("Not palindrome ");
	}
}
