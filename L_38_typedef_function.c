//    Purpose:    working theory of typedef in programming C.


/*

    Typedef is a keyword in 'C' & this is used to change or " 
    alternate the existing or user defined " data_type names.

    Syntax of typedef.

>>  typedef <previous_name>  <alias_name>;

*/

#include <stdio.h>
#include <string.h>

typedef struct student
{
    int id;
    int marks;
    char fav_char;
    char name[20];
} std;

std s1, s2, s3, s4;  /* ->  global variable.*/

int main()
{
    typedef unsigned long /* previous_name */ ul /* alias_name */;
    ul l1, l2, l3;
    typedef int integer;
    integer a = 123;
    printf("\ninteger a = %d", a);

    // Typedef's uses in pointers:-
    // int *x, y;
    typedef int* intptr;
    intptr x, y;
    int c = 89;
    x = &c;
    y = &c;

    // std s1, s2, s3, s4;  ->  Local variable.
    s1.id = 01;
    s2.id = 02;
    s3.id = 03;
    s4.id = 04;
    s1.marks = 100;
    s2.marks = 200;
    s3.marks = 300;
    s4.marks = 400;
    s1.fav_char = 'w';
    s2.fav_char = 'x';
    s3.fav_char = 'y';
    s4.fav_char = 'z';
    strcpy(s1.name, "Arpan Chandra 01");
    strcpy(s2.name, "Arpan Chandra 02");
    strcpy(s3.name, "Arpan Chandra 03");
    strcpy(s4.name, "Arpan Chandra 04");

    printf("\n\nName of student_01 : %s\n", s1.name);
    printf("I'd of student_01 : %d\n", s1.id);
    printf("Marks of student_01 : %d\n", s1.marks);
    printf("Fav_char of student_01 : %c\n", s1.fav_char);

    printf("\nName of student_02 : %s\n", s2.name);
    printf("I'd of student_02 : %d\n", s2.id);
    printf("Marks of student_02 : %d\n", s2.marks);
    printf("Fav_char of student_02 : %c\n", s2.fav_char);

    printf("\nName of student_03 : %s\n", s3.name);
    printf("I'd of student_03 : %d\n", s3.id);
    printf("Marks of student_03 : %d\n", s3.marks);
    printf("Fav_char of student_03 : %c\n", s3.fav_char);

    printf("\nName of student_04 : %s\n", s4.name);
    printf("I'd of student_04 : %d\n", s4.id);
    printf("Marks of student_04 : %d\n", s4.marks);
    printf("Fav_char of student_04 : %c\n", s4.fav_char);

    return 0;
}