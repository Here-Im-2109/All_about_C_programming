// write a program on Memory Leak In C


#include <stdio.h>
#include <stdlib.h>

void memoryLeakFunction() {
    int *ptr = (int *)malloc(sizeof(int) * 5); // Allocating memory
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    // Using the allocated memory
    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 10;
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    // Memory is NOT freed -> LEAK!
}

int main() {
    memoryLeakFunction();
    
    printf("Memory leak occurred because allocated memory was not freed!\n");
    return 0; // Memory remains allocated even after program exits
}