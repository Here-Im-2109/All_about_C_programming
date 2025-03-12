//	Purpose: calculate the even numbers between two numbers.


#include <stdio.h>
int main()
{
	int a, b;
	printf("\nEnter the 1st number: ");
	scanf("%d", &a);
	printf("\nEnter the last number: ");
	scanf("%d", &b);
	printf("The even numbers between %d & %d are: ", a, b);
	for (a; a <= b; a++)
	{
		if ((a & (a + 1)) == a)
		{
			printf("%d ", a);
		}
	}
	return 0;
}