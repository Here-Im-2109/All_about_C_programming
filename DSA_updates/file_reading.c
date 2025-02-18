//    Purpose:  learning fread in c programming.




#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    FILE *ptr = NULL;
    ptr = fopen("abc.txt","r");
    if(ptr ==  NULL)
    {
        printf("Something went wrong");
    }
    char str[80];
    fread(str,1,80,ptr);
    printf("%s",str);
    fclose(ptr);
    return 0;
}