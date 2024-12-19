// Purpose:    Call by value & Call by reference in C.

#include <stdio.h>
void change1(int a, int b)
{
    a = 2;
    b = 5;
}

void change(int *a, int *b)
{
    *a = 23456;
    *b = 56789;
}

int main()
{
    int x = 123, y = 456;
    int a = x, b = y;
    printf("x = %d & y = %d\n", x, y);


    change1(x, y); // calling change1 funcation -> call by value.
    printf("x=%d & y = %d\n", x, y);
    // if we changes the value in this funcation then nothing will change.


    change(&x, &y); // calling change funcation  -> call by reference
    printf("x = %d & y = %d\n", x, y);
    // but if we changes the value in this funcation then changes will be happening.
    return 0;
}