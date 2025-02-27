//    Purpose : To find the greatest number among 3 numbers.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    FILE *ptr = fopen("3_num_input.txt", "r");
    FILE *ptr1 = fopen("3_num_output.txt", "w");
    if (ptr == NULL)
    {
        printf("something went wrong");
        return 1; // Add return statement to exit if file opening fails
    }
    int a, b, c;

    fscanf(ptr, "%d", &a);
    fscanf(ptr, "%d", &b);
    fscanf(ptr, "%d", &c);

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    if ((a > b) && (a > c))
    {
        fprintf(ptr1, "%d", a); // Corrected fprintf call
    }
    else if (b > c)
    {
        fprintf(ptr1, "%d", b); // Added fprintf call for consistency
    }
    else
    {
        fprintf(ptr1, "%d", c); // Added fprintf call for consistency
    }

    fclose(ptr); // Close the input file
    fclose(ptr1); // Close the output file

    return 0;
}