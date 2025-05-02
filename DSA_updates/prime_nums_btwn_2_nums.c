//	Purpose: Prime number between two number.


#include <stdio.h>
void main()
{
	int a, b, c;
	printf("\nEnter your 1st Number: ");
	scanf("%d", &a);
	printf("\nEnter your 2nd Number: ");
	scanf("%d", &b);
	while (a < b)
	{
		c = 2;
		while (c < b)
		{
			if (a % c == 0)
			{
				break;
			}
			c = c + 1;
			if (c == a)
			{
				printf(" %d", c);
			}
		}
		a = a + 1;
	}
}