// Purpose: To understand the bitwise operators in C.

#include <stdio.h>
int main() {
    int a = 5, b = 3; // Binary: a = 0101, b = 0011

    printf("Bitwise AND (a & b): %d\n", a & b);  // 0101 & 0011 = 0001 (1)
    printf("Bitwise OR (a | b): %d\n", a | b);   // 0101 | 0011 = 0111 (7)
    printf("Bitwise XOR (a ^ b): %d\n", a ^ b);  // 0101 ^ 0011 = 0110 (6)
    
    printf("Left Shift (a << 1): %d\n", a << 1); // 0101 << 1 = 1010 (10)
    printf("Right Shift (a >> 1): %d\n", a >> 1);// 0101 >> 1 = 0010 (2)

    printf("Bitwise NOT (~a): %d\n", ~a);        // ~0101 = 1010 (2's complement: -6)

    return 0;
}
