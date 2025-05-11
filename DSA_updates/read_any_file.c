//    Purpose:  Reading all of the data on any file in C programming.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    FILE *ptr = fopen("abc.txt", "r");
    char ch;
    char str[10];

    if (ptr == NULL)
    {
        printf("The file will not be created !");
        exit(1);
    }

    printf("\n");

    while (!feof(ptr))
    {
        ch = fgetc(ptr);
        printf("%c", ch);
    }
    printf("\n\n");

    // while (!feof(ptr))
    // {
    //     fgets(str,10,ptr);
    //     printf("%s",str);
    // }

    fclose(ptr);

    return 0;
}