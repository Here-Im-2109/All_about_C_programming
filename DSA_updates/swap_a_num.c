// Purpose: This code swaps two numbers without using a temporary variable.

#include<stdio.h>
void main ()
{
	int a,b;
	printf ("Enter the value of a : ");
	scanf ("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	/*
	a=a+b;
	b=a-b;
	a=a-b;

	or

	int temp;
	temp = a;
	a=b;
	b=temp;
	 
	*/

	a=a+b-(b=a);
	printf ("The swap num is : a = %d & b = %d",a,b);

}