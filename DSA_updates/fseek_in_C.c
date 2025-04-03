//    Purpose:  Learn fseek function on File in C programming.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("fseek.txt", "rb"); // Open the file in binary read mode
    if (ptr == NULL)
    {
        perror("Error opening file. Ensure 'fseek.txt' exists and is readable.");
        exit(1);
    }

    // Seek to the 6th byte from the beginning and read a character
    if (fseek(ptr, 6, SEEK_SET) != 0)
    {
        perror("Error seeking in file");
        fclose(ptr);
        exit(1);
    }
    char ch = fgetc(ptr);
    if (ch == EOF)
    {
        perror("Error reading file");
        fclose(ptr);
        exit(1);
    }
    printf("Character at 6th byte: %c\n", ch);

    // Seek 3 bytes backward from the current position and read a character
    if (fseek(ptr, -3, SEEK_CUR) != 0)
    {
        perror("Error seeking in file");
        fclose(ptr);
        exit(1);
    }
    ch = fgetc(ptr);
    if (ch == EOF)
    {
        perror("Error reading file");
        fclose(ptr);
        exit(1);
    }
    printf("Character 3 bytes before current position: %c\n", ch);

    // Seek 6 bytes backward from the end and read a character
    if (fseek(ptr, -6, SEEK_END) != 0)
    {
        perror("Error seeking in file");
        fclose(ptr);
        exit(1);
    }
    ch = fgetc(ptr);
    if (ch == EOF)
    {
        perror("Error reading file");
        fclose(ptr);
        exit(1);
    }
    printf("Character 6 bytes before the end: %c\n", ch);

    fclose(ptr);
    return 0;
}