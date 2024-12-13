//    Purpose:    Exercise 3 on Recursion solution:

int fib(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int fib_main(int num)
{
    int a=0,b=1;
    for (int i = 0; i < num; i++)
    {
        b=a+b;
        a=b-a;
    }
    return a;
    
}
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    printf("The Value of %d no. element of fibonacci series is: %d ",num,fib_main(num));
    printf("\nThe Value of %d no. element of fibonacci series is: %d\n",num,fib(num));

   return 0;
}