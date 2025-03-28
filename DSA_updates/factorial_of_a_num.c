//	Purpose: Factorial of a number.

#include <stdio.h>
int fact(int x)
{
	if (x == 1)
	{
		return 1;
	}

	else
	{
		return x * fact(x - 1);
	}
}

void main()
{
	int n;
	printf("Enter a num: ");
	scanf("%d", &n);
	printf("%d", fact(n));
}