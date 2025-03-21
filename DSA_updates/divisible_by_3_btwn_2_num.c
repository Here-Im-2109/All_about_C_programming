//		Purpose: numbers divisible by 3.

#include <stdio.h>
int main()
{
	int a, b;
	printf("\nEnter your 1st number: ");
	scanf("%d", &a);
	printf("\nEnter your 2nd number: ");
	scanf("%d", &b);
	while (a <= b)
	{
		if (a % 3 != 0)
		{
			a = a + 1;
		}
		else
		{
			printf("%d ", a);
			a = a + 1;
		}
	}
	return 0;
}