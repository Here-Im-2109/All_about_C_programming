//    Purpose:  Employee Manager Exercise Solution.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("\nEnter the number of employees you have: ");
    scanf("%d",&num);
    int chars, i = 0;
    char a, b;
    char *ptr;
    while (i < num)
    {
        printf("\nEnter the number of characaters in your Employee Id: ");
        scanf("%d", &chars);
        // fflush(stdin);  //input buffer
        getchar(); // input buffer


        printf("\nEnter the value of a: ");
        scanf("%c", &a);
        getchar();
        printf("\nEnter the value of b: ");
        scanf("%c", &b);
        
        getchar();
        ptr = (char *)malloc((chars) * sizeof(char));
        printf("\nEnter your Employee Id: ");
        // scanf("%[^\n]s",ptr);
        // scanf("%[^\n]%*c",ptr);
        gets(ptr);
        
        printf("\nValue of a is: %c", a);
        printf("\nValue of b is: %c", b);
        printf("\nYour Employee Id is: %s\n", ptr);

        free(ptr);
        ptr=NULL;
        i++;
    }
    printf("\n\n");
    
    return 0;
}