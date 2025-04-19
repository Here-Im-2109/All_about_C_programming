//    Purpose:  Learning Memory leak in C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int i=1;
    int *ptr;
    while (i)
    {
        ptr = (int *)malloc(400000 * sizeof(int));
        printf("\nPress 1 for continue or press 0 to terminate the programme: ");
        scanf("%d", &i);
        free(ptr); // if you do not free the memory then this is the case of memory leak.
    }

    return 0;
}