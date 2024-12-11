                    //  Purpose: Learning Pointers in 'C'

/*
    Pointer is a special type of data type in C Language :
    pointers is a variable which can store the address of another variable.
    Can be of type int, char, array, function, or any other pointer.
    pointer in C programming language can be declared using " * " (asterisk symbol).

    int a;
    int *p = &a;     It means: 'p' points to 'a'

    The address of operator '&' returns the address of a variable.

    '*' is the dereference operator (also called indirection operator),
    used to get the value at a given address.

*/

#include <stdio.h>
int main()
{
    int a = 100;
    int *ptra = &a;
    int d = *ptra;
    int **ptrb = &ptra;
    int ***ptrf = &ptrb;     //eisa to hote reheta hain....
    int c = 50;
    int *ptrc = NULL;


    // int e = **ptra; // invalid statement, because pointer to pointer variable stores another pointer's address.


    printf("\n=> The address of pointer \"ptra\" is: %p\n", &ptra);

    printf("=> The address of the \"a\" using pointer \"ptra\" is: %p\n", ptra);

    printf("=> The address of the \"a\" using \"&\" operator is: %p\n", &a);

    printf("=> The value of variable \"a\" - \"in-term of pointer\" is: %d\n", *ptra);

    printf("=> The value of \"a\" is: %d\n", a);



    printf("\n=> The address of pointer \"ptrb\" is: %p\n", &ptrb);

    printf("=> The address of pointer \"ptra\" is: %p\n", &ptra);

    printf("=> The address of the \"ptra\" using pointer \"ptrb\" is: %p\n", ptrb);

    printf("=> The address of \"a\" using \"pointer to pointer variable\" is: %p\n", *ptrb);

    printf("=> The address of the \"a\" using \"&a\" is: %p\n", &a);

    printf("=> The value of a \"in-term of pointer to pointer\" is: %d\n", **ptrb);

    printf("=> The value of a is: %d\n", a);



    printf("\n=> The address of pointer \"ptrc\" is: %p\n", &ptrc);

    printf("=> The address of \"NULL\" is: %p\n", ptrc); // thats means => [ 0//(nil)//(zero) ]

    //  printf("The value of ' NULL ' pointer is: %p\n", *ptrc);

    /*
        value in ptrc is a NULL -> ( matlab ki khali hain kuch nahi hain uske andar )
        Upper statement is invalid because if we dereference the pointer 'ptrc' 
        then nothing in this 'ptrc'because this is a NULL pointer thats why 
        the upper statement is not valid.
    */
    printf("=> The address of the \"c\" is: %p\n", &c);

    printf("=> The value of \"c\" is: %d\n", c);

    

    printf("\n=> The address of \"d\" is: %p\n", &d);

    printf("=> The value in \"d\" is: %d\n", d);

    return 0;
}