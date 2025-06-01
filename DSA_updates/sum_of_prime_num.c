#include <stdio.h>
void main()
{
	int n, a = 2, count = 0, sum = 0;
	printf("Enter a Number: ");
	scanf("%d", &n);
	while (n > count)
	{
		int b = 2;
		while (b <= a)
		{
			if (a % b == 0)
			{
				break;
			}
			b = b + 1;
		}
		if (b == a)
		{
			sum = a + sum;
			count = count + 1;
		}
		a = a + 1;
	}
	printf("Sum of first %d prime numbers are: %d", n, sum);
}