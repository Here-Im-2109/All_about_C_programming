//    Purpose: Nested Loops consept in C.


#include <stdio.h>
void main()
{
    int num, n = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            printf("%d, %d\n", i, j);
            n = n + 1;
        }
    }
}