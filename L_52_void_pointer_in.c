//    Purpose: Void Pointer.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int a = 20;
    float b = 23.45;
    void *ptr;
    ptr = &a;
    printf("The value of a is: %d\n", *((int *)ptr));
    ptr = &b;
    printf("The value of b is: %0.2f\n", *((float *)ptr));

    return 0;
}