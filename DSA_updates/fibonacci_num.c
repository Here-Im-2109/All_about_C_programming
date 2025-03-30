//	Purpose: Check "fibonacci" number.



#include <stdio.h>
void main()
{
	int a = 0, b = 0, c = 1, num, i = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	if (num == 1)
	{
		printf("0");
	}
	else if (num == 2)
	{
		printf("0 1");
	}
	if (2 < num)
	{
		printf("0 1");
		while (i < (num - 2))
		{
			if (num > 2)
			{
				a = b;
				b = c;
				c = a + b;
				printf(" %d", c);
			}
			i = i + 1;
		}
	}
}