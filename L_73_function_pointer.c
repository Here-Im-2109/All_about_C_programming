// purpose: Function pointers in C can be used as callbacks 
//          to pass functions as arguments to other functions. 
//          This is useful when you want to change the behavior of a 
//          function at runtime without modifying its code. 
//          This snippet demonstrates how to use function pointers as callbacks in C.

#include <stdio.h>

// Function prototypes
int add(int a, int b);
int subtract(int a, int b);
void compute(int x, int y, int (*callback)(int, int));

int main() {
    int a = 10, b = 5;

    // Passing 'add' function as a callback
    printf("Using callback function with add:\n");
    compute(a, b, add);

    // Passing 'subtract' function as a callback
    printf("Using callback function with subtract:\n");
    compute(a, b, subtract);

    return 0;
}

// Definition of the 'add' function
int add(int a, int b) {
    return a + b;
}

// Definition of the 'subtract' function
int subtract(int a, int b) {
    return a - b;
}

// Function that accepts a function pointer as a callback
void compute(int x, int y, int (*callback)(int, int)) {
    int result = callback(x, y);
    printf("Result: %d\n", result);
}