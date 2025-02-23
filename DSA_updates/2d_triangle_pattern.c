//	Purpose: Pattern Printing.


#include <stdio.h>
int main()
{
	int num, r = 1, space, star;
	printf("\nEnter a number: ");
	scanf("%d", &num);
	printf("\nThe pattern is:\n\n");
	while (r <= num)
	{
		space = 0;
		while (space < (num - r))
		{
			printf(" ");
			space = space + 1;
		}
		star = 0;
		while (star < r)
		{
			printf("* ");
			star = star + 1;
		}
		printf("\n");
		r = r + 1;
	}

	return 0;
}