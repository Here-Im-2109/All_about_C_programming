//      Purpose : Learn r+ mode on File in C programming.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("abc.txt", "r+");
    if (ptr == NULL)
    {
        printf("Something went wrong!");
        exit(1);
    }
    char str[100];
    printf("\nEnter your content you want to print: ");
    gets(str);
    fprintf(ptr, "%s", str);

    fclose(ptr);

    return 0;
}