//    Purpose: Storage Classes In C Auto, Extern, Static & Register Storage Classes.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "L_49_temp.c"

// int sum = 100;

// int my_func(int a, int b)
// {
//     int sum;    // Local Variable
//     sum = a + b;
//     return sum;
// }
int main()
{
    // Declearation -- telling the compiler about the variable which you are declear. (no space reserved.)
    // Defination -- Declearation + space reservation.
    // int sum = 98;
    // int sum = my_func(3,5);     // where [int_sum] is a local variable.
    printf("The sum is: %d\n", sum);

    return 0;
}