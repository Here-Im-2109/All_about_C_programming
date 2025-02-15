//	Purpose: Binary digit of a decimal number

#include<stdio.h>
void main ()
{	
	int num,rem;
	printf ("\nEnter a Number: ");
	scanf ("%d",&num);
    int b=num;
	int a=0;
	int factor=1;
	while (num>0)
		{
			rem=num%2;
			num=num/2;
			a=a+(rem*factor);
			factor=factor*10;
		}
	printf ("The Binary digit of %d is = %d",b,a);
}