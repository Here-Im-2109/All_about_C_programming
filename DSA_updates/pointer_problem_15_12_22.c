//  Purpose: Pointer's Question

#include <stdio.h>
void main()
{
    float a, b, add;
    float *addr_a, *addr_b;
    scanf("%f %f", &a, &b);
    addr_a = &a;
    addr_b = &b;
    // add = *addr_a + *addr_b;
    printf("%f", *addr_a + *addr_b);
}