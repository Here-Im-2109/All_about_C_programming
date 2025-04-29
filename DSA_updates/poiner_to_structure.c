//    Purpose: To demonstrate the use of pointer to structure. 

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct poiner_to_structure
{
    int roll;
    char name[40];
    float marks;
}pts;

pts *ptr,s1,s2;

int main ()
{

    ptr = &s1;
    ptr->roll = 123;
    strcpy((*ptr).name,"Arpan");
    ptr->marks = 12.34;
    printf("Your name is: %s\n",ptr->name);
    printf("Your name is: %d\n",ptr->roll);
    printf("Your name is: %0.2f\n",ptr->marks);


    return 0;
}