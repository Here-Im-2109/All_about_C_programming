// Purpose: To find the smallest number in an array

#include <stdio.h>
void main()
{
	int n, sum = 0;
	printf("\nEnter the number of elements you want in array[n]: ");
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		printf("\nEnter %d no value of this array: ", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("\nThe entered elements of this array is: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	int temp = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (temp > arr[i])
		{
			temp = arr[i];
		}
	}
	printf("\nThe smallest number is in this array[n] is: %d ", temp);
}