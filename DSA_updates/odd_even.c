//	Purpose: To print the odd or even number

#include <stdio.h>
void main()
{
	int a;
	printf("\nEnter a number : ");
	scanf("%d", &a);
	if (a % 2 == 0)
	{
		printf("\n%d is an Even number.",a);
	}
	else
	{
		printf("\n%d is an Odd number.",a);
	}
}