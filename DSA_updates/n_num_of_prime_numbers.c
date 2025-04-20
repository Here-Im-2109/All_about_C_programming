#include <stdio.h>
void main()
{
	int n, count = 0, a = 2;
	printf("\nEnter a number for printing that numbers of \"Prime Numbers\" you want to print:\n=> ");
	scanf("%d", &n);
	while (n > count)
	{
		int b = 2;
		while (b < a)
		{
			if (a % b == 0)
			{
				break;
			}
			b = b + 1;
		}
		if (b == a)
		{
			printf("%d ", a);
			count = count + 1;
		}
		a = a + 1;
	}
}