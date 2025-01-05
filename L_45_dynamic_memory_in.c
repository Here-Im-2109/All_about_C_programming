//    Purpose:    Memory Layout of C Programs - ( Dynamic Memory Allocation )

//      In terminal ->  gcc <file_name>.c; size .\a.exe
//      all the data shown in bits.


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
    int n, i;
    int *ptr;

    // Dynamic memory allocation using malloc
    printf("Enter the number of elements for malloc: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Memory allocated using malloc.\n");
    for (i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }

    printf("Elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Reallocating memory using realloc
    printf("\nEnter the new size for realloc: ");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    printf("Memory reallocated using realloc.\n");
    for (i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }

    printf("Updated Elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Freeing the allocated memory
    free(ptr);
    printf("Memory freed.\n");

    return 0;
}