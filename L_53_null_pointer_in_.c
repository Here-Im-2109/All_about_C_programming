//                  Purpose: NULL pointer in C programming.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main ()
{

    int a = 34;
    int *ptr = &a;
    ptr = NULL;
    if (ptr != NULL)
    {
        printf("The value of a is: %d\n",*ptr);
    }
    else
    {
        printf("The pointer is a NULL pointer and cannot be dereference\n");
    }

    return 0;
}