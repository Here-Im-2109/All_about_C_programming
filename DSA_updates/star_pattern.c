// purpose: This code prints a star pattern based on user input.

#include<stdio.h>
void main ()
{
	int a;
	scanf ("%d",&a);
	while (a>0)
	{
		a=a-1;
		printf ("\n*");
	}
}