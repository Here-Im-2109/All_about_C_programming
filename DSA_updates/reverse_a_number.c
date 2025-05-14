// Purpose: To reverse a number

#include <stdio.h>
void main ()
{
	int a;
 	printf ("Enter a number: ");
 	scanf ("%d",&a);
 	int rev=0;
 	while (a!=0)
	{
		rev=(rev*10)+(a%10);
		a=a/10;
	}	
	printf ("%d ",rev);
}