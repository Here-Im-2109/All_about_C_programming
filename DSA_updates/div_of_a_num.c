//	Purpose: divide two floting numbers in C programming.



#include <stdio.h>
void main()
{
	float a, b, x;
	printf("\nEnter a value of a: ");
	scanf("%f", &a);
	printf("\nEnter a value of b: ");
	scanf("%f", &b);
	x = (a / b);
	printf("%0.2f devided %0.2f = %0.2f \n", a, b, x);
}