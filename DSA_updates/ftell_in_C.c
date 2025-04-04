//    Purpose:  Learn ftell function on File in C programming.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    FILE *ptr = NULL;
    ptr = fopen("ftell_in_abc.txt", "r");
    if (ptr == NULL)
    {
        printf("Something went wrong: ");
        exit(1);
    }
    printf("The FILE pointr is in the position of: %d\n", ftell(ptr));
    printf("The written things are in that FILE is: ");
    while (!feof(ptr))
    {
        char ch = fgetc(ptr);
        printf("%c", ch);
    }

    // fseek(ptr, 6, SEEK_SET);

    printf("\nThe FILE pointr is in the position of: %d\n", ftell(ptr));
    fclose(ptr);
    return 0;
}