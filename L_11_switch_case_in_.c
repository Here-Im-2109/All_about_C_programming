/*
                    Rule for switch Statement

        01. switch expression must be an 'int' or 'char'.

        02. case value must be an 'int' or 'char'.

        03. 'case' must come inside switch.

        04. 'break' is not a must in switch statement.
*/

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Entred number is 1\n");
        break;

    case 2:
        printf("Entred number is 2\n");
        break;

    case 3:
        printf("Entred number is 3\n");
        break;

    default:
        printf("1,2 and 3 se nahi hain !!\n");
    }
return 0;
}
