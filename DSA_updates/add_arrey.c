//	Purpose: Sum of all the elements of the array
#include <stdio.h>
int main()
{
	int n, i = 0, sum = 0;
	printf("\nEnter the number of elements you want in array[n]: ");
	scanf("%d", &n);
	printf("\n");
	int arr[n];

	while (i < n)
	{
		printf("Enter %d no. element of the array[n]: ", i + 1);
		scanf("%d", &arr[i]);
		sum = sum + *(arr + i);
		i = i + 1;
	}
	printf("\nThe sum of this numbers are: ");
	int j = 0;
	while (j < n - 1)
	{
		printf("%d + ", arr[j]);
		j = j + 1;
	}
	printf("%d = %d ", arr[n - 1], sum);

	return 0;
}