//    Purpose:  Writting something in any file in C programming.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    FILE *ptr = NULL;
    char str[100];
    ptr = fopen("file_01.txt", "w");

    if (ptr == NULL)
    {
        printf("The file will not be created !");
        exit(1);
    }
    printf("\nEnter the string: ");
    gets(str);
    fputs(str, ptr);
    fclose(ptr);
    return 0;
}