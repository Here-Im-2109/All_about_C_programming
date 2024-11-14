/*
        Arithmetic Operators:

    Addition - " + "

    subtraction - " - "

    multiplication - " * "

    division - " / "

    modulus - " % " - it gives us 'reminder' (1234 % 2 = 0) but (1234 % 3 = 1).



        Relation Operators :

    is equal to - " == "

    is not is equal to - " != "

    Greater than - " > "

    less than - " < "

    greater than or equal to - " >= "

    less than or equal to - " <= "



        Logical Operators :

    Logical 'AND' operator - "&&"

    Logical 'OR' operator - " || "

    Logical 'NOT' operator - " ! "



        Bitwise Operators :

    Bitwise 'AND' operator - " & "

    Bitwise 'OR' operator - " | "

    Bitwise 'XOR' operator - " ^ "

    Bitwise 'ones complement ' operator - " ~ "

    Bitwise 'left shift' operator - " << "

    Bitwise 'right shift' operator - " >> "



        Assignment Operators :

    Is equals to operator - "=",
    Plus is equals to operator - "+=",
    Minus equals to operator - "-=",
    Multiplies equals to operator - "*=",
    Divide is equals to operator - "/= "



        Miscellaneous operators :

    sizeof Operator - " sizeof(x) "

    ampersand Operator - " & "

    Pointer to a variable operator - " *x "

    Conditional expression operator - " ?: "

*/

#include <stdio.h>
int main()
{
    int a, b;
    a = 100;
    b = 5;
    printf("\n%d", a + b); //sum
    printf("\n%d", a - b); //minus
    printf("\n%d", a * b); //multiply
    printf("\n%d", a / b); //divide
    printf("\n%d", a % b); //modulus
    printf("\n%d", a & b); //Bitwise AND
    printf("\n%d", a | b); //Bitwise OR
    printf("\n%d", a ^ b); //Bitwise XOR
    // printf("\n%d\n\n", a ~ b);

    return 0;
}