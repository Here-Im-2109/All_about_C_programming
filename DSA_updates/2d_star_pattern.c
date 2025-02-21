//	Purpose: square star pattern

#include<stdio.h>
void main ()
{
	int a,num;
	printf ("\nEnter a number: ");
	scanf ("%d",&num);
	printf("\nThe pattern is:\n\n");
	int b=num;
	while (b>0)
	{
		a=num;
		while(a>0)
		{
			printf ("* ");
			a=a-1;
		}
		printf ("\n");
		b=b-1;
	}
}