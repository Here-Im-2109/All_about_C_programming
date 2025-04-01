//    Purpose:  Writting something in any file in C programming.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    FILE *ptr = fopen("file_01.txt", "w");
    int num;

    if (ptr == NULL)
    {
        printf("The file will not be created !");
        exit(1);
    }
    printf("\nEnter a number: ");
    scanf("%d",&num);

    fprintf(ptr,"%d",num);

    fclose(ptr);

    return 0;
}