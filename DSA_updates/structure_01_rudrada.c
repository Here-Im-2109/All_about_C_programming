/*
    Purpose:    Learning Structure in C
*/
#include <string.h>
#include<math.h>
#include <stdio.h>
typedef struct
{
    long long contact, roll;
    char name[50], class[50], addr[150], email[50];
}student;

void main()
{
    student s1;
    strcpy(s1.class, "2nd Year");
    s1.roll = 1;
    s1.contact = 9832575616;
    strcpy(s1.name, "Arpan Chandra");
    strcpy(s1.email, "arpan.2001chandra@gmail.com");
    strcpy(s1.addr, "Meral, Raina, Purba Bardhaman");

    
    student s2;
    strcpy(s2.class, "1st Year");
    s2.roll = 2;
    s2.contact = 9083771909;
    strcpy(s2.name, "Arpan Chandra - 02");
    strcpy(s2.email, "arpan_02.2001chandra@gmail.com");
    strcpy(s2.addr, "Meral, Raina, Purba Bardhaman, two");

    
    printf("\n");
    printf("The thikuchigusti of the students are:\n\n");
    printf("Name - %s\n", s1.name);
    printf("Roll - %lld\n", s1.roll);
    printf("Class - %s\n", s1.class);
    printf("email - %s\n", s1.email);
    printf("Contact - %lld\n", s1.contact);
    printf("addr - %s\n", s1.addr);
    printf("------------------------------------\n");
    printf("Name - %s\n", s2.name);
    printf("Roll - %lld\n", s2.roll);
    printf("Class - %s\n", s2.class);
    printf("email - %s\n", s2.email);
    printf("Contact - %lld\n", s2.contact);
    printf("addr - %s\n", s2.addr);
    printf("\n");
}