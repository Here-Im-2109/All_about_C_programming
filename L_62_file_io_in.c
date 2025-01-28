//    Purpose: File I/O In C

/*
    Data is bits of storage... & collection and processing of data is information.
    File I/O (Input/Output) in C allows programs to interact with files on the system 
    for reading, writing, or both. It is an essential feature for storing data 
    permanently, unlike variables that only retain data during program execution. 
    C provides a set of standard library functions in <stdio.h> to handle file operations 
    efficiently.
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *file;  // File pointer
    char line[256];  // Buffer to store each line from the file

    // Open the file in "read" mode
    file = fopen("L_62_sample.txt", "r");
    if (file == NULL) {  // Check if the file was opened successfully
        printf("Error: Could not open file.\n");
        return 1;  // Exit if file opening fails
    }

    printf("Contents of the file:\n");

    // Read and print each line until the end of the file
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(file);
    return 0;
}