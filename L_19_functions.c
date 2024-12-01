/*
    Function_Syntax:

    return_type function_name (data_type parameter 1, data_type parameter 2,...)
    {
        //code to be executed;
    }

*/

#include <stdio.h>
int sum(int a, int b) // user defind function
{
    return (a+b);
}

void printstar(int n) // user defind function
{
    printf("Print the '*' for %d times.\n",n);
    for (int i = 0; i < n; i++)
    {
        printf("* ");
    }
}

int main() // main function
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    int b;
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("\nThe sum of a & b is %d\n\n", sum(a, b));
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printstar(num);
    printf("\n");

    return 0;
}