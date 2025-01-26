//    Purpose: Predefined Macros & Other Pre-processor Directives:C

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    printf("\nToday is: "__DATE__);
    printf("\nNow, the time is:"__TIME__);
    printf("\nThe file name is: "__FILE__);
    printf("\nThe line number is: %d",__LINE__);
    printf("\nProgram is being compiler using ANSI standard: %d\n\n",__STDC__);

    return 0;
}