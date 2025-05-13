//    Purpose:  Learning & using of realloc function


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("\nEnter the number of elements you want in array: ");
    int num;
    scanf("%d", &num);
    int *ptr = (int *)malloc(num * sizeof(int));
    printf("\n");
    for (int i = 0; i < num; i++)
    {
        printf("Enter %d no. value: ", i + 1);
        scanf("%d", ptr + i);
    }

    printf("\nThe entered values are:\n\n");

    for (int i = 0; i < num; i++)
    {
        printf("%d\t", *(ptr + i));
    }

    printf("\n\nEnter the updated number of elements you want in array: ");
    scanf("%d", &num);
    int *ptr1 = (int *)realloc(ptr, num * sizeof(int));
    printf("\n\nprevious pointer's address is: %u\nNew pointer's address is: %u\n", ptr, ptr1);
    printf("\n");
    for (int i = 0; i < num; i++)
    {
        printf("Enter %d no. value: ", i + 1);
        scanf("%d", ptr1 + i);
    }

    printf("\n\nThe entered values are:\n\n");

    for (int i = 0; i < num; i++)
    {
        printf("%d\t", *(ptr1 + i));
    }
    // printf("");
    free(ptr1);
    ptr = NULL;

    return 0;
}