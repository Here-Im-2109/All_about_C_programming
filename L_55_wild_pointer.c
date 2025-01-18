//    Purpose: WILD pointer in C.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 1234;
    int *ptr; // This is a wild pointer, because this pointer is uninitialized.
    ptr = &a; // ptr is no longer a wild pointer.
    printf("The value of a is %d\n", *ptr);

    // ptr = 34; // This is not a good thing to do.

    return 0;
}