//	Purpose: Delete the from the entered array elements.

#include <stdio.h>

int main()
{
	int key, i = 0, j = 0;
	int arr[10] = {19, 3, 6, 7, 8, 9, 12, 14, 17, 15};
	printf("\nEnter a number: ");
	scanf("%d", &key);
	printf("\nYour numbers are: ");
	while (i < 10)
	{
		if (key != arr[i])
		{
			printf("%d ", arr[i]);
		}
		i++;
	}
	return 0;
}