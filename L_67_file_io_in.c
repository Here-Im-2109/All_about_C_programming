// Purpose: Demonstrate writing to a file using fputs and fputc,
//  and reading from a file using fgets and fgetc.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char str[100];
    char ch;
    
    // Writing to a file using fputs and fputc
    file = fopen("L_67_file_io.txt", "w"); // Open file in write mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fputs("Hello, this is a test file.\n", file);
    fputc('A', file);
    fputc('\n', file);
    fclose(file);
    printf("Data written successfully using fputs and fputc.\n");
    
    // Reading from the file using fgets and fgetc
    file = fopen("L_67_file_io.txt", "r"); // Open file in read mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("Reading from file using fgets: \n");
    while (fgets(str, sizeof(str), file) != NULL) {
        printf("%s", str);
    }
    
    rewind(file); // Reset file pointer to beginning
    
    printf("\nReading from file using fgetc: \n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    
    fclose(file);
    return 0;
}