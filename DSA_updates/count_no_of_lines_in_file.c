//    Purpose:  Count the number of lines in a perticular FILE in C programming.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *ptr = NULL;
    int count = 1;
    char ch;
    ptr = fopen("count_no_of_lines_in_file.txt", "r");
    if (ptr == NULL)
    {
        printf("Something went wrong !!");
        exit(1);
    }

    while (!feof(ptr))
    {
        ch = fgetc(ptr);
        if (ch == '\n')
        {
            count++;
        }
    }
    fclose(ptr);

    printf("Number of lines in this FILE is %d", count);

    return 0;
}