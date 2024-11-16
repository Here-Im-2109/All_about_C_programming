// Header file
#include <stdio.h>



// #define_preprocessor_constant.
// if you defined a constant using '#' then it is called preprocessor constat.
// it is defined as: [ #define variable <somevalue> ]
#define PIE 3.14



int main()
{

    /*
        print the value of #define preprocessor
        float PIE = 1234.5678; *(invalid statement)
        cannot do this because 'PIE' is pre defined constant.
    */
    printf("\n01. %f\n", PIE);
    int a = 8;
    a=12;
    //this is possibe...

    const float b = 7.333;
    // const is a constant keyword.
    // b = 5.33; ....cannot do this because 'b' is a constant.
    printf("02. The value of a is %d and the value of b is %0.3f\n", a, b);


    /*  {%((+-)a.bf)}  [ where 'a' is character space, & 'b' is the decimal accuracy ]

       1. %c  -> character
       2. %d  -> integer
       3. %f  -> floting
       4. %l  -> long integer
       5. %lf -> double
       6. %Lf -> long double
    */
    printf("03. The value of b is %10.3f\n",b);


    /*  SOME ESCAPE SEQUENCES  */

    // '\a' -> alarm or beep
    // '\n' -> new line
    // '\t' -> print tab (Horizontal)
    // '\b' -> backspace

    return 0;
}