//    Purpose:  Learning & using of malloc function

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    printf("\nEnter the number of elements you want in this array: ");
    int num;
    scanf("%d", &num);
    printf("\n");
    int *ptr = (int *)malloc(num * sizeof(int));
    for (int i = 0; i < num; i++)
    {
        printf("Enter %d no. value: ", i + 1);
        scanf("%d", ptr + i);
    }

    printf("\nEntered values are:\n\n");

    for (int i = 0; i < num; i++)
    {
        printf("%d\t", *(ptr + i));
    }
    printf("\n\n");
    free(ptr);
    ptr = NULL;

    return 0;
}