//	Purpose: Print multiple number of a given number.

#include<stdio.h>
void main ()
{
	int a=0,c=0;
	printf ("\nEnter a number: ");
	scanf ("%d",&c);
	for(int i=1;i<=10;i++)
	{
		a=c*i;
		printf ("%d X %d = %d\n",c,i,a);
	}
}