
//    Purpose       :    Arrays

#include <stdio.h>
void main()
{
    int n, m;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    int marks[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("(%d,%d). Element: ", (i + 1), (j + 1));
            scanf("%d", &marks[i][j]);
        }
    }

    printf("1st entered matrix is:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", marks[i][j]);
        }
        printf("\n\n");
    }

    printf("Transpose of this matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", marks[j][i]);
        }
        printf("\n\n");
    }

    printf("Diagonal elements of this matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("%d\t", marks[i][j]);
            }
            else
            {
                printf("0\t");
            }
        }
        printf("\n\n");
    }

    printf("Enter a number: ");
    scanf("%d", &n);
    int ele[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("(%d,%d). Element: ", (i + 1), (j + 1));
            scanf("%d", &ele[i][j]);
        }
    }

    printf("2nd entered matrix is:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", ele[i][j]);
        }
        printf("\n\n");
    }

    printf("Matrix multiplication is:\n");

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum = sum + marks[i][j] * ele[j][k];
            }
            printf("%d\t", sum);
        }
        printf("\n\n");
    }
}