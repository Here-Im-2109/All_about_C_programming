//    Purpose: Pascle_Triangle 

#include<stdio.h>
int factorial(int n)
{ 
    int f,mul=1;
    while (n>0)
    {
        mul=mul*n;
        n--;
    }
    return mul;
}
int nCr (int n,int r)

{
    int c;
    c = factorial(n)/(factorial(r)*factorial(n-r));
    return c;
}
void main ()
{
   int n;
   printf("Enter a number: ");
   scanf("%d",&n);
   int i,j,k;
   for (i=0;i<=n;i++)
   {
        for(k=0;k<(n-i);k++)
            {
                printf(" ");
            }
        for(j=0;j<=i;j++)
        { 
            
            printf("%d ",nCr(i,j));
        }
        printf("\n");
   }
}