//    Purpose: The Sum of total digits of any number.



#include <stdio.h>
void main()
{
    int a;
    printf("\nEnter any number you want: ");
    scanf("%d", &a);
    int count = 0, sum = 0;
    while (a > 0)
    {
        sum = sum + (a % 10);
        count = count + 1;
        a = a / 10;
    }
    printf("\nThe number of digits of the entered number is: %d", count);
    printf("\n\nThe Sum of total digits are: %d", sum);
}