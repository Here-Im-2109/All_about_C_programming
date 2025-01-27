//Purpose:   Write a C program to multiply two matrices.

#include <stdio.h>

#define MAX 10

int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int row1, col1, row2, col2;
    int i, j, k;

    // Input dimensions of the matrices
    printf("Enter the rows and columns of matrix A: ");
    scanf("%d %d", &row1, &col1);
    printf("Enter the rows and columns of matrix B: ");
    scanf("%d %d", &row2, &col2);

    // Check if multiplication is possible
    if (col1 != row2) {
        printf("Matrix multiplication not possible. Column of A must equal row of B.\n");
        return 1;
    }

    // Input elements of matrix A
    printf("Enter elements of matrix A:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input elements of matrix B
    printf("Enter elements of matrix B:\n");
    for (i = 0; i < row2; i++) {
        for (j = 0; j < col2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix C to 0
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            C[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            for (k = 0; k < col1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display result matrix C
    printf("Resultant matrix after multiplication:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
