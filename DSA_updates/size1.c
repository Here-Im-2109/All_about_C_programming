//    Purpose: Size of these data_type

#include<stdio.h>
int main ()
{
    // %lu = Unsigned int or unsigned long
    
    printf("\n");
    
    printf("int : %lu Byte\n",sizeof(int));
    printf("unsigned int : %lu Byte\n",sizeof(unsigned int));
    printf("long long : %lu Byte\n",sizeof(long long));
    printf("float : %lu Byte\n",sizeof(float));
    printf("char : %lu Byte\n",sizeof(char));
    printf("double : %lu Byte\n",sizeof(double));
    printf("long double : %lu Byte\n",sizeof(long double));
    
    printf("\n");
}