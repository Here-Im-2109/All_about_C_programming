//Purpose:    String's Functions in C


/*

    strcat() ->    This function is used to concatenate or combine 2 given string.

    strlen() ->    This function is used to show length of a string.

    strrev() ->    This function is used to show reverse of a string.

    strcpy() ->    This function used to copy one string into another.

    strcmp() ->    This function is used to compare 2 given string.


*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main ()
{
    char s1[]="Arpan";
    char s2[]="Darpan";
    printf("The string compare for S1 and S2 is: %d ",strcmp(s1,s2)); 
    //Remember if string_1 and string_2 are same then the value of string_compare is '0'.
    char s3[100];
    strcpy(s3,s1);
    printf("\nThe length of the string 1 is: %d",strlen(s1));
    printf("\nThe length of the string 2 is: %d",strlen(s2));

    
    // gets(strrev(s1));
    printf("\nThe reverse string s1 is: ");
    puts(strrev(s1));
    printf("The reverse string s2 is: ");
    puts(strrev(s2));


    printf("The concatenation of 2 string s1 & s2 is: ");
    puts(strcat(s1,s2));
    printf("Now the string S3 is: ");
    puts(s3);


    strrev(s2);
    printf("%s is a friend of %s ",s3,s2);

    return 0;
}