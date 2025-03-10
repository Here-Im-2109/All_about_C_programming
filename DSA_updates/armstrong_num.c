//	Purpose: check the number is armstrong or not.

#include <stdio.h>
void main()
{
	int copy, num, a, b, count = 0, sum = 0;
	printf("\nEnter a Number: ");
	scanf("%d", &num);
	copy = num;
	while (num != 0)
	{
		num = num / 10;
		count = count + 1;
	}
	num = copy;
	while (num != 0)
	{
		b = count;
		int power = 1;
		while (b > 0)
		{
			power = power * (num % 10);
			b = b - 1;
		}
		sum = sum + power;
		num = num / 10;
	}
	if (sum == copy)
	{
		printf("The num is an Amstrong num");
	}
	else
	{
		printf("The num is not an Amstrong num");
	}
}