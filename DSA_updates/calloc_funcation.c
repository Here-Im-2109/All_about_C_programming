//      Purpose:  Learning & using of calloc function.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    printf("\nEnter a value: ");
    int num;
    scanf("%d", &num);
    int *ptr = (int *)calloc(num, sizeof(int));
    for (int i = 0; i < num; i++)
    {
        printf("Enter %d no. value: ", i + 1);
        scanf("%d", ptr + i);
    }

    printf("The entered values are:\n\n");

    for (int i = 0; i < num; i++)
    {
        printf("%d\t", *(ptr + i));
    }
    printf("\n\n");
    free(ptr);
    ptr = NULL;

    return 0;
}