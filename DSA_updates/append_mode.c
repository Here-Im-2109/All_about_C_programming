//    Purpose : Learn append mode on File in C programming.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("\n\nThe content in this FILE is:\n\n");

    FILE *ptr = NULL;
    char str[100];

    ptr = fopen("append_mode.txt", "r");
    char ch;

    while (!feof(ptr))
    {
        ch = fgetc(ptr);
        printf("%c", ch);
    }

    fclose(ptr);

    ptr = fopen("append_mode.txt", "a");

    if (ptr == NULL)
    {
        printf("Something Went wrong !!");
        exit(1);
    }

    printf("\n\nEnter the content you want to store in this FILE: ");
    gets(str);

    printf("\n\nNow, in this FILE written content is:\n\n");

    fprintf(ptr, "\n%s", str);
    fclose(ptr);

    ptr = fopen("append_mode.txt", "r");

    while (!feof(ptr))
    {
        ch = fgetc(ptr);
        printf("%c", ch);
    }

    printf("\n\n");

    fclose(ptr);

    return 0;
}