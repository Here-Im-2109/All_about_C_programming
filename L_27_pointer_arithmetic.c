//    Purpose:   Pointer Arithmetic in 'C'

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int a = 50, *ptra;
    ptra = &a;
    printf("\nSize of integer is: %d\n", sizeof(int));
    printf("Size of pointer is: %d\n", sizeof(ptra));

    printf("Address of ( pointer + 0 ) is = %lu\n", &ptra + 0);
    printf("Address of [ int_a ] using pointer is = %lu\n", ptra );
    printf("Address of \"a\" using '&' operator is %lu\n", &a);
    printf("Value of 'a' using pointer\"ptra\" is: = %d\n", *ptra);
    printf("Value of 'a' using 'a' = %d\n\n", a);


    printf("Address of ( pointer + 1 ) is = %lu\n", &ptra + 1);
    printf("Address of [ int_a + 1 ] using pointer is = %lu\n", ptra + 1);
    printf("Address of [ int_a + 1 ] using '&' operator is = %lu\n", &a + 1);
    printf("Value of \"*ptra + 1\" = %d where \"*ptra\" the value of \"a\" & we know (a + 1)= %d\n", *ptra + 1, a + 1);
    printf("Value of 'a + 1' = %d' where (a & 1) is a int datatype.\n\n", a + 1);


    printf("Address of ( pointer + 2 ) is = %lu\n", &ptra + 2);
    printf("Address of [ int_a + 2 ] using pointer is = %lu\n", ptra + 2);
    printf("Address of [ int_a + 2 ] using '&' operator is = %lu\n", &a + 2);
    printf("Value of \"*ptra + 2\" = %d where \"*ptra\" the value of \"a\" & we know (a + 2)= %d\n", *ptra + 2, a + 2);
    printf("Value of 'a + 2' = %d' where (a & 2) is a int datatype.\n\n", a + 2);

    return 0;
}