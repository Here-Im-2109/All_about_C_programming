//		Purpose: Print the elements of the array.

#include <stdio.h>
int main()
{
	int n;
	printf("\nEnter the number of elements you want in the array[n]: ");
	scanf("%d", &n);
	int arr[n];
	int a = 0, b = 0;
	printf("\n");
	while (a < n)
	{
		printf("Enter your %d no. element: ", a + 1);
		scanf("%d", &arr[a]);
		a = a + 1;
	}
	printf("Your entered numbers are: ");
	while (b < n)
	{
		printf("%d ", arr[b]);
		b = b + 1;
	}

	return 0;
}