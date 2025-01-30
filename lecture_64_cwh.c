//    Purpose:  Functions For File I/O In C Language

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr = NULL;

    /***** Reading a file ******/
    char str01[1000]; // Increased buffer size
    ptr = fopen("L_64_my_file.txt", "r");

    if (ptr == NULL) {
        printf("Error! File not found.\n");
        return 1; // Exit with error code
    }

    printf("Content of \"L_64_my_file.txt\":\n");
    while (fgets(str01, sizeof(str01), ptr) != NULL) {
        printf("%s", str01);
    }
    fclose(ptr);

    /****** Writing to a file ******/
    char str02[] = "\nThis content is produced by ARPAN";
    ptr = fopen("L_64_my_file.txt", "a"); // "a" append mode

    if (ptr == NULL) {
        printf("Error! Cannot open file for writing.\n");
        return 1;
    }

    fprintf(ptr, "%s", str02);
    fclose(ptr);

    return 0;
}