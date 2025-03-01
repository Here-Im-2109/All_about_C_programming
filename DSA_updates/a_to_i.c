//          Purpose: character to integer.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int num;
    printf("\nEnter the number of elements you want : ");
    scanf("%d", &num);
    char string[num + 1]; // +1 for the null terminator
    printf("Enter the characters: ");
    scanf("%s", string);

    int sum = 0;
    int i = 0;
    int isNegative = 0;

    if (string[0] == '-')
    {
        isNegative = 1;
        i = 1;
    }

    while (string[i] != '\0')
    {
        if (!isdigit(string[i]))
        {
            printf("Invalid input. Only numeric characters are allowed.\n");
            return 1;
        }
        sum = sum * 10 + (string[i] - '0');
        i++;
    }

    if (isNegative)
    {
        sum = -sum;
    }

    printf("%d\n", sum);

    return 0;
}