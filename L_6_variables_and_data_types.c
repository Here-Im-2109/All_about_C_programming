/*
        Rules for defining a variable in C :

    -> Can contain alphabets, digits, and underscore ( _ )
    -> A variable name can start with an alphabet and underscore only.
    -> Can't start with a number.
    -> whitespace & reserved keywords is not allowed.
    -> Valid variable names: int xyz, float xyzl23, char _xyz123
    -> Invalid variable names: $xyz, int 77xyz, char long;

        DATA TYPES :

    -> Basic Data Type: int, char, float, double
    -> Derived Data Type: array, pointer, structure, union
    -> Enumeration Data Type: emum
    -> Void Data Type: void

*/

#include <stdio.h>
int main()
{

    printf("\n");
    int *a;
    printf("int : %lu Byte\n", sizeof(int));
    printf("unsigned int : %lu Byte\n", sizeof(unsigned int));
    printf("long long : %lu Byte\n", sizeof(long long));
    printf("float : %lu Byte\n", sizeof(float));
    printf("char : %lu Byte\n", sizeof(char));
    printf("double : %lu Byte\n", sizeof(double));
    printf("long double : %lu Byte\n", sizeof(long double));
    printf("Pointer : %lu Bytes\n\n", sizeof(*a));

    return 0;

    // %lu = Unsigned int or unsigned long
}