//    Purpose:  Dynamic Memory Allocation:    [ Malloc, Calloc, Realloc & Free() ]


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    printf("\nEnter a number of elements you want in array[n]: ");
    scanf("%d", &n);

    //   malloc()  function.

    int *p = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d no. value of the array[n]: ", i + 1);
        scanf("%d", &*(p + i));
    }
    printf("The values are in this the array[n] is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", p[i]);
    }

    free(p);  // now p is a dangling pointer.
    p = NULL; // p is no more dangling pointer.

    //   calloc()  function.

    p = (int *)calloc(n, sizeof(int));
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d no. value of the array[n]: ", i + 1);
        scanf("%d", p + i);
    }

    printf("The values are in this the array[n] is: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }

    //   realloc()  function.

    printf("\n\nRenter a number of elements you want in array[n]: ");
    scanf("%d", &n);

    p = (int *)realloc(p, n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d no. value of the array[n]: ", i + 1);
        scanf("%d", &*(p + i));
    }
    printf("The values are in this the array[n] is: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }

    //    free()  funcation

    free(p);

    return 0;
}