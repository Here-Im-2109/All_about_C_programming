//    Purpose: Print the greatest number between three numbers.

#include<stdio.h>
void main ()
{ int a;
  printf ("Enter 1st Number: ");
  scanf ("%d",&a);
  int b;
  printf ("Enter 2nd Number: ");
  scanf ("%d",&b);
  int c;
  printf ("Enter 3rd Number: ");
  scanf ("%d",&c);
  
  if ((a>b)&&(a>c))
 	{
		printf ("%d is greatest: ",a);
	}
	else if (b>c)
	{
    printf ("%d is greatest: ",b);
	}
	else
	{
    printf ("%d is greatest: ",c);
	}
}