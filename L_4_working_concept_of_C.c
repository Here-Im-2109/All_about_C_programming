/*
    -> How to 'C' Programming language works !?

    ans:

    =>  pre processing -> Compilation -> Assembly -> linkin ->
          -> linkin -> ('main executable file') -> loading in RAM -> Execute -> 'output.'

    In 'Terminal' if we write down this instruction -> " gcc -Wall -save-temps lecture_04_cwh.c "
    then this will happened

    pre processing -> (main.i -> pre_processed output) -> Compilation
    Compilation -> ( main.s -> assembly level instructions.) -> Assembly
    Assembly -> (main.o -> Machine level instructions.) -> linkin
    linkin -> a.exe -> main executable file.

    These are some files which can made by the compiler for an output:


    01. main.i -> pre_processed output
    02. main.s -> assembly level instructions.
    03. main.o -> Machine level instructions.
    04. main.exe -> Main executable file.

*/

#include <stdio.h>
int main()
{
    int a, b;
    printf("\nEnter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);
    printf("The sum of %d & %d is: %d\n",a,b, a + b);

    return 0;
}