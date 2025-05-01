//	Purpose: Find Prime Number

#include <stdio.h>
int main()
{
	int a, b = 2;
	printf("\nEnter a number: ");
	scanf("%d", &a);
	if (a == 1)
	{
		printf("\nThe number is neither Prime nor Composite");
	}
	else if (a == 2)
	{
		printf("\nThe Num is prime");
	}
	else
	{
		while (b < a)
		{
			if (a % b == 0)
			{
				printf("\nThe num is Composite");
				break;
			}
			b++;
		}
		if (a == b)
		{
			printf("\nThe num is Prime");
		}
	}

	return 0;
}