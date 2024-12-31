//    Purpose:    Static Variables in 'C'.


/*

                                        Local variables:

  =>  Scope is the region of a program where a define variable can exist and beyond which it cannot be accessed.

  =>  Variable which are accessed inside a function or a block are called local variables.
        ->  They can only be accessed by the function they are declared in!
        ->  They are inaccessible to the function outside the function they are declared in!


                                        Global variables:

    =>  These are the variables defined outside the main method.

    =>  Global variables are accessible throughout the entire program from any function.

    =>  If a local and global variable has the same name the local variable will take preference.

        ->  Scope of a global variable is entire the program.

                                        Formal arguments:

    These variables are treated as local variables with_in a function.

    These variables take precedence over global variables.

                                    Static Variables in C:

        static data_type name = value;
ex:->   static int a = 7;

    Static variables are one kind variables which have a property of preserving
there values even when they go out of scope.

*/

#include <stdio.h>
#include <string.h>
int b = 34; //  Global variable
int function_1(int b1)
{
    int a = 20;
    printf("Global variable is: %d\n", b);
    printf("local variable is: %d\n", a);
    printf("Formal arguments is: %d\n", b1);

    static int myvar = 0; //    Static Variable
    myvar++;
    printf("The value of my_var is: %d\n", myvar);

    return b1 + myvar;
}

int main()
{
    int b1 = 100;
    
    printf("The value of funcation = %d\n", function_1(b1));

    printf("The value of funcation = %d\n", function_1(b1));

    printf("The value of funcation = %d\n", function_1(b1));

    return 0;
}