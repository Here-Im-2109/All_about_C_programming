//    Purpose: bitwise operator

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void calculate_the_maximum(int n, int k) 
{
    int and=0,or=0,xor=0;
    for(int i=1;  i<=n;   i++)
        {

            for(int j = i+1;    j<=n;   j++)
            {
                
                if((i&j) > and &&(i&j) < k)
                {
                    and = i&j;
                }
                if( (i|j) > or && (i|j) < k)
                {
                    or = i|j;
                }
                if( (i^j) > xor && (i^j) < k)
                {
                    xor = i^j;
                }
            }

        }
 printf("After AND opearation : %d\nAfter OR opearation : %d\nAfter XOR opearation : %d",and,or,xor);
}

int main() 
{
    int n, k;
    printf("Enter a number using a space: ");
    scanf("%d %d",&n,&k);
    calculate_the_maximum(n,k);

    return 0;
}