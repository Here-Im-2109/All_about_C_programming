//   Purpose: Matrix multiplication

#include <stdio.h>
void main()
{
   int a[100][100];
   int l[100][100];
   int s, res;
   int r, c, m, n, k, x;
   int i, j;
   printf("\nEnter two number of rows and columns @1st: ");
   scanf("%d %d", &r, &c);
   printf("\nEnter two number of rows and columns @2nd: ");
   scanf("%d %d", &m, &n);
   if (c != m)
      printf("\nMultiplication is not possible\n");
   else
   {
      printf("\nMultiplication is possible:-\n");
      // input - 1st matrix
      for (i = 0; i < r; i++)
      {
         for (j = 0; j < c; j++)
         {
            printf("\nEnter value for first_array[%d][%d]:", i + 1, j + 1);
            scanf("%d", &a[i][j]);
         }
      }
      printf("\n");
      // input - 2nd matrix
      printf("\n");
      for (i = 0; i < m; i++)
      {
         for (j = 0; j < n; j++)
         {
            printf("\nEnter value for second_array[%d][%d]:", i + 1, j + 1);
            scanf("%d", &l[i][j]);
         }
      }
      // output - 1st matrix
      printf("\nFirst Matrix is:\n");
      for (i = 0; i < r; i++)
      {
         for (j = 0; j < c; j++)
         {
            printf("\t%d", a[i][j]);
         }
         printf("\n");
      }
      // output 2nd matrix
      printf("\nSecond Matrix is:\n");
      for (i = 0; i < m; i++)
      {
         for (j = 0; j < n; j++)
         {
            printf("\t%d", l[i][j]);
         }
         printf("\n");
      }
      // matrix multiplication
      printf("\nMultiplication Result is:\n");
      for (i = 0; i < r; i++)
      {
         for (k = 0; k < n; k++)
         {
            s = 0;
            for (j = 0; j < m; j++)
            {
               s = s + a[i][j] * l[j][k];
            }
            printf("\t%d", s);
         }
         printf("\n");
      }
   }
}