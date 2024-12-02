#include <stdio.h>
void main()
{
    int num;
    printf("\nEnter a number you want multiplication table of : ");
    scanf("%d", &num);
    printf("The Multiplication is :\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", num, i, num * i);
    }
}