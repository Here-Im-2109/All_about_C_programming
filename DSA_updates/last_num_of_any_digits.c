//	Purpose: Entered number's last digit.

#include <stdio.h>
void main()
{
	int a,Last_Number;
	printf("Enter a number: ");
	scanf("%d", &a);
	Last_Number = a % 10;
	printf("Last digit of the entered number is : %d", Last_Number);
}