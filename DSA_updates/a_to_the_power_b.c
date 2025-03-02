//	Purpose: calaulate a to power b

#include <stdio.h>
void main()
{
	int a;
	printf("Enter a value of a: ");
	scanf("%d", &a);
	int b;
	printf("Enter a value of b: ");
	scanf("%d", &b);
	int c = b;
	int power = 1;
	while (b > 0)
	{
		power = power * a;
		b = b - 1;
	}
	printf("%d to the power %d is: %d", a, c, power);
}