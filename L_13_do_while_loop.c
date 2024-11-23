//          01. do while loop in C
//          N.B:  "do while loop" excutes at least once.

#include <stdio.h>
int main()
{
    int i = 0;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i < 10);
    return 0;
}