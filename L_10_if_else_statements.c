//    'if' or 'else' statements -> control statements.
// => It is used to perform operations based on some conditions.

/*****************************************************************/

/*
    Types of control statements:
    ****************************
    1. 'if' -> statement
    2. 'if else' -> statements
    3. 'if -else if ladder' -> statements
    4. 'nested if' -> statements
*/

#include <stdio.h>
int main()
{
    int age;
    printf("\nEnter your age: ");
    scanf("%d", &age);
    printf("You have entered %d as your age.\n", age);
    if (age >= 18)
    {
        printf("Yes, You can vote !\n");
    }
    else if (age >= 10)
    {
        printf("You are between 10 to 18 and you can vote for kids.\n");
    }

    else
    {
        printf("No, You cannot vote !!\n");
    }

    return 0;
}