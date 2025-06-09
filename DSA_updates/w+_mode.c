/*
    Purpose : Learn w+ mode on File in C programming.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char ch;
    FILE *ptr = NULL;
    ptr = fopen("qwe.txt","w+");
    if (ptr == NULL)
    {
        printf("Something went wrong!");
        exit(1);
    }

    char str[100];
    printf("\nEnter your content you want to print: ");
    gets(str);
    fprintf(ptr,"%s",str);

    rewind(ptr); //This funcation will move the cursor in this FILE on the first bytes address of the file.

    printf("\nThe written thing is: ");
    while (!feof(ptr))
    {
        ch = fgetc(ptr);
        printf("%c", ch);
    }

    printf("\n\n");
    fclose(ptr);

    return 0;
}