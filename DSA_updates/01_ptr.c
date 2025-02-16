//	Purpose: relation between pointer & array.

#include <stdio.h>
int main()
{
	int arr[14] = {11, 23, 56, 67, 45, 34, 457, 567, 890, 345};
	int *ptr = arr;
	printf("%d\n", ptr[5] + 1);
	printf("%d\n", *(ptr + 5) + 1);
	return 0;
}