//    Purpose: String in C Prrogramming.

/*

    String is a null terminated character array.

    Every string is a character array but every character array is not a string.

    NULL character = '\0' (String termination character).

*/

#include <stdio.h>
#include<stdlib.h>

// Call By Value
void str_01(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", *(str + i));
        i++;
    }
    
    printf("\nEnter your new string: ");
    gets(str);
    printf("\nHere is your new string: ");
    puts(str);
}

// Call By Refence
void str_02(char *str_2)
{
    int i = 0;
    while (*(str_2 + i) != '\0')
    {
        printf("%c", *(str_2 + i));
        i++;
    }

    printf("\nChange the string: ");
    gets(str_2);
    printf("\nHere is your new string: ");
    puts(str_2);
}

int main()
{
    char string_1[50]; // ( "Arpan Chandra" ||   {'A','r','p','a','n' ' ' 'C','h','a','n','d','r','a','\0'} )
    printf("\nEnter Your Name: ");
    // scanf("%[^\n]s",string_1);        -> input the string value.
    // scanf("%[^\n]%*c",string_1);      -> input the string value.
    gets(string_1);                    //-> input the string value.
    printf("=> Using printf in main function: %s\n", string_1);
    printf("=> Using 'puts' to print the String in main function: ");
    puts(string_1);
    printf("=> Using user defined function_01 to print the String: ");
    str_01(string_1);
    printf("\n=> Using printf in main function for 2nd time to check the whole string: %s\n\n", string_1);
    printf("=> Using user defined function_02 to print the String: ");
    str_02(string_1);
    printf("\n=> Using printf in main function for 3rd time to check the whole string: %s\n", string_1);
    
    return 0;
    
}