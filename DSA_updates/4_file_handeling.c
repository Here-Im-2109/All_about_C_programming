//          Purpose:  learning fscanf in file handeling.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[1000];
    FILE *fp = fopen("4_file_handeling.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return -1;
    }

    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }

    fclose(fp);
    return 0;
}