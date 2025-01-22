//    Purpose:  #define and #include Preprocessor Directives in C.


// #define: It is used to define a constant value which can 
// -> be used throughout the program. It is a preprocessor directive.
#include <stdio.h>
#include "L_54_dangling_pointer.c"
#define PI 3.14
#define square(r) r*r

int main()
{
    float x = PI;
    float r = 4;
    int *ptr = funcdang();
    printf("The value of PI is = %0.3f\n", x);
    printf("The area of the circle is: %0.3f\n",PI * square(r));

    return 0;
}