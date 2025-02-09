// purpose: Demonstrate the usage of function pointers in C

#include <stdio.h>

// Function prototypes
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
void operate(int x, int y, int (*operation)(int, int));

int main() {
    // 1. Basic function pointer usage
    int (*func_ptr)(int, int);  // Function pointer declaration
    func_ptr = add;  // Assigning function address
    printf("Addition using function pointer: %d\n", func_ptr(10, 5));

    // 2. Passing function pointers as arguments
    operate(8, 3, subtract);
    operate(6, 7, multiply);

    // 3. Array of function pointers (menu-driven)
    int choice, a, b;
    int (*operations[])(int, int) = {add, subtract, multiply};

    printf("\nChoose an operation:\n");
    printf("0: Add\n1: Subtract\n2: Multiply\nEnter choice: ");
    scanf("%d", &choice);

    if (choice >= 0 && choice < 3) {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("Result: %d\n", operations[choice](a, b));
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}

// Function definitions
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }

// Function that takes a function pointer as argument
void operate(int x, int y, int (*operation)(int, int)) {
    printf("Result: %d\n", operation(x, y));
}