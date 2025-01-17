//    Purpose: Dangling pointer in C language.

#include <stdio.h>
#include <stdlib.h>

int *funcdang() {
    int a, b, sum2;
    a = 10;
    b = 12;
    sum2 = a + b;
    return &sum2; // Returning address of local variable
}

int main() {
    // Case 1: Deallocation of memory block
    int *ptr = (int *)malloc(4 * sizeof(*ptr));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;

    for (int i = 0; i < 4; i++) {
        printf("The numbers are: %d\n", ptr[i]);
    }

    free(ptr);  // Freeing allocated memory
    ptr = NULL; // Avoid dangling pointer by setting to NULL

    // Case 2: Function returning local variable address
    int *dangptr = funcdang(); // This is a dangling pointer
    // printf("%d\n", *dangptr); // Dereferencing would cause undefined behavior

    // Case 3: Variable goes out of scope
    int *dangptr3;
    {
        int a = 13;
        dangptr3 = &a; // a is a local variable
    }
    // printf("The value of a is: %d\n", *dangptr3); // Undefined behavior

    return 0;
}