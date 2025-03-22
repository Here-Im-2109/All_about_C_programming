//    Purpose:  Dynamic Memory Allocation

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    printf("\nEnter a number of elements you want in array[n]: ");
    scanf("%d", &n);
    void *ptr;

    //   malloc()  function.

    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d no. value of the array[n]: ", i + 1);
        scanf("%d", ((int *)ptr + i));
    }
    printf("The values are in this the array[n] is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", (*(int *)ptr + i));
    }

    free(ptr);
    ptr = NULL;

    //   calloc()  function.

    ptr = (float *)calloc(n, sizeof(float));
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d no. value of the array[n]: ", i + 1);
        scanf("%f", ((float *)ptr + i));
    }

    printf("The values are in this the array[n] is: ");

    for (int i = 0; i < n; i++)
    {
        printf("%0.2f ", (*(float *)ptr + i));
    }

    //   realloc()  function.

    printf("\n\nRenter a number of elements you want in array[n]: ");
    scanf("%d", &n);

    float *temp_ptr = (float *)realloc(ptr, n * sizeof(float));
    if (temp_ptr == NULL) {
        printf("Memory reallocation failed.\n");
        free(ptr);
        return 1; // Exit with error
    }
    ptr = temp_ptr;

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d no. value of the array[n]: ", i + 1);
        scanf("%f", ((float *)ptr + i));
    }
    printf("The values are in this the array[n] is: ");

    for (int i = 0; i < n; i++)
    {
        printf("%0.2f ", *((float *)ptr + i));
    }

    //    free()  function

    free(ptr);

    return 0;
}




/*                     using of realloc function                     */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main()
// {
//     char *str1;
//     char str[20];

//     // Initial memory allocation

//     str1 = (char *)malloc(24 * sizeof(char));
//     printf("Enter your email address: ");
//     gets(str1);
//     // strcpy(str1,"arpan.2001chandra@gmail");
//     printf("String = %s,  Address = %u\n", str1, str1);

//     // Reallocating memory
//     str1 = (char *)realloc(str1, 30 * (sizeof(char)));
//     printf("Enter the last part of your email address: ");
//     gets(str);
//     strcat(str1, str);
//     printf("String = %s,  Address = %u\n", str1, str1);

//     // Deallocate allocated memory
//     free(str1);

//     return (0);
// }