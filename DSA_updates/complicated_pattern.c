/*
Print a pattern of numbers from  to  as shown below,
each of the numbers is separated by a single space.

                2 2 2
                2 1 2
                2 2 2

              3 3 3 3 3
              3 2 2 2 3
              3 2 1 2 3
              3 2 2 2 3
              3 3 3 3 3
*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int row, col;
  for (row = 0; row < (2 * n) + 1; row++)
  {
    if (row == n)
    {
      row = n + 2;
    }
    int i;
    for (i = n; i >= abs(n - row); i--)
    {
      printf("%d ", i);
    }
    for (i = 0; i < (2 * (abs(n - row) - 1)) - 1; i++)
    {
      printf("%d ", abs(n - row));
    }
    i = 2 * (abs(n - row) - 1) != 0 ? abs(n - row) : 2;
    for (i; i <= n; i++)
    {
      printf("%d ", i);
    }
    printf("\n");
  }
}