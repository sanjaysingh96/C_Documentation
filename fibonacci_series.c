// WAP a c program to generate fibonacci Series Up to n terms, Where value of n is entered by user.
// apne se 2 terms ka sum hota hai   0,1=1; 1,2=3; 2,3=5; 3,4=7;
#include<stdio.h>
main()
{
	int n1=0,n2=1,n3,n,i;
	printf("How Many terms you want in series? : ");
	scanf("%d",&n);
	printf("%d\t%d\t",n1,n2);
	for(i=1;i<=n-2;i++)
	{
		n3=n1+n2;
		printf("%d\t",n3);
		n1=n2;
		n2=n3;
	}
}
