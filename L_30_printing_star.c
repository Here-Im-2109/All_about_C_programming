//    Purpose: Exercise 4 printing star patterns in C


#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter '0' to print star triangular pattern or enter '1' to print reveresed star triangular pattern : ");
    scanf("%d", &n);
    if (n == 0)
    {
        int count, num;
        printf("Enter a number: ");
        scanf("%d", &num);
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    else if (n==1) 
    {
        int count, num;
        printf("Enter a number: ");
        scanf("%d",&num);
        while (num > 0)
        {
            for (int j = num; j != 0; j--)
            {
                printf("* ");
            }
            num = num - 1;
            printf("\n");
        }
    }

    return 0;
}