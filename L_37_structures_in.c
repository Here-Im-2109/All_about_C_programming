//  Purpose:    Structures in 'C'

#include<stdio.h>
#include<string.h>

/*
    Structures are user defined data types in C.
*/

struct student
{
    int id;
    int marks;
    char fav_char;
    char name[40];
};

struct student s1,s2,s3,s4; //Global variables are used in others user defined functions.



void print_name() 
//This is user defined function for showing that global variables are access from any functions.
{
    printf("\nUsing 'User Defined' function to print the Name: %s\n",s1.name);
}



int main ()
{
    //struct student s1,s2,s3,s4;    
    //->  but local variable are not used in others user defined functions because it is a part of main function.

    s1.id=01;
    s2.id=02;
    s3.id=03;
    s4.id=04;

    s1.marks=100;
    s2.marks=200;
    s3.marks=300;
    s4.marks=400;

    s1.fav_char='w';
    s2.fav_char='x';
    s3.fav_char='y';
    s4.fav_char='z';

    strcpy(s1.name,"Arpan Chandra");
    strcpy(s2.name,"Arpan Chandra 02");
    strcpy(s3.name,"Arpan Chandra 03");
    strcpy(s4.name,"Arpan Chandra 04");



    printf("\nName of student_01 : %s\n",s1.name);
    printf("I'd of student_01 : %d\n",s1.id);
    printf("Marks of student_01 : %d\n",s1.marks);
    printf("Fav_char of student_01 : %c\n",s1.fav_char);

    printf("\nName of student_02 : %s\n",s2.name);
    printf("I'd of student_02 : %d\n",s2.id);
    printf("Marks of student_02 : %d\n",s2.marks);
    printf("Fav_char of student_02 : %c\n",s2.fav_char);

    printf("\nName of student_03 : %s\n",s3.name);
    printf("I'd of student_03 : %d\n",s3.id);
    printf("Marks of student_03 : %d\n",s3.marks);
    printf("Fav_char of student_03 : %c\n",s3.fav_char);

    printf("\nName of student_04 : %s\n",s4.name);
    printf("I'd of student_04 : %d\n",s4.id);
    printf("Marks of student_04 : %d\n",s4.marks);
    printf("Fav_char of student_04 : %c\n",s4.fav_char);


    print_name(); // -> calling user defined function to print the name.

    return 0;
}




// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// typedef struct person
// {
//     char name[20];
//     char dob[10];
//     char blood[15];


// } per;

// typedef struct student
// {
//     per person;

//     char id[20];
//     char roll[10];
//     int addm;
//     char lib[20];

// } std;

// std s1,s2,s3,s4;

// int main ()
// {

//     strcpy(s1.person.name,"Arpan Chandra");
//     strcpy(s1.person.dob,"21/09/00");
//     strcpy(s1.person.blood,"O +ve");
//     strcpy(s1.roll,"21EE8026");
//     strcpy(s1.id,"1234567");
//     s1.addm = 908377;
//     strcpy(s1.lib,"21U10238");

//     strcpy(s2.person.name,"Mayukh Bhattacharya");
//     strcpy(s2.person.dob,"04/04/01");
//     strcpy(s2.person.blood,"O +ve");
//     strcpy(s2.roll,"21EE8034");
//     strcpy(s2.id,"1234");
//     s2.addm = 454566;
//     strcpy(s2.lib,"21U10239");

//     strcpy(s3.person.name,"Taman Nayek");
//     strcpy(s3.person.dob,"!?/!?/!?");
//     strcpy(s3.person.blood,"!?");
//     strcpy(s3.roll,"21EE8035");
//     strcpy(s3.id,"1234980");
//     s3.addm = 4566;
//     strcpy(s3.lib,"21U10240");

//     strcpy(s4.person.name,"Rana Gorai");
//     strcpy(s4.person.dob,"!?/!?/!?");
//     strcpy(s4.person.blood,"!?");
//     strcpy(s4.roll,"21EE8036");
//     strcpy(s4.id,"1234979");
//     s4.addm = 457866;
//     strcpy(s4.lib,"21U10240");
    

//     printf("\nDetails of 1_No. Student:\n\n");
//     printf("Name of the 1_No. student is: %s\n",s1.person.name);
//     printf("DOB of the 1_No. student is: %s\n",s1.person.dob);
//     printf("Blood grp of the 1_No. student is: %s\n",s1.person.blood);
//     printf("Roll no. of the 1_No. student is: %s\n",s1.roll);
//     printf("I'd card no. of the 1_No. student is: %s\n",s1.id);
//     printf("Admission card no. of 1_No. student is: %d\n",s1.addm);
//     printf("Library card no of 1_No. student is: %s\n",s1.lib);

//     printf("\nDetails of 2_No. Student:\n\n");
//     printf("Name of the 2_No. student is: %s\n",s2.person.name);
//     printf("DOB of the 2_No. student is: %s\n",s2.person.dob);
//     printf("Blood grp of the 2_No. student is: %s\n",s2.person.blood);
//     printf("Roll no. of the 2_No. student is: %s\n",s2.roll);
//     printf("I'd card no. of the 2_No. student is: %s\n",s2.id);
//     printf("Admission card no. of 2_No. student is: %d\n",s2.addm);
//     printf("Library card no of 2_No. student is: %s\n",s2.lib);

//     printf("\nDetails of 3_No. Student:\n\n");
//     printf("Name of the 3_No. student is: %s\n",s3.person.name);
//     printf("DOB of the 3_No. student is: %s\n",s3.person.dob);
//     printf("Blood grp of the 3_No. student is: %s\n",s3.person.blood);
//     printf("Roll no. of the 3_No. student is: %s\n",s3.roll);
//     printf("I'd card no. of the 3_No. student is: %s\n",s3.id);
//     printf("Admission card no. of 3_No. student is: %d\n",s3.addm);
//     printf("Library card no of 3_No. student is: %s\n",s3.lib);

//     printf("\nDetails of 4_No. Student:\n\n");
//     printf("Name of the 4_No. student is: %s\n",s4.person.name);
//     printf("DOB of the 4_No. student is: %s\n",s4.person.dob);
//     printf("Blood grp of the 4_No. student is: %s\n",s4.person.blood);
//     printf("Roll no. of the 4_No. student is: %s\n",s4.roll);
//     printf("I'd card no. of the 4_No. student is: %s\n",s4.id);
//     printf("Admission card no. of 4_No. student is: %d\n",s4.addm);
//     printf("Library card no of 4_No. student is: %s\n",s4.lib);

//     return 0;
// }




//strecture pointer in C.

// #include<stdio.h>
// #include<string.h>
// typedef struct student
// {
//     float rollno;
//     char name[50];
//     float marks;
// }student;

// student s1,s2;

// int main ()
// {
//     student *ptr;
//     ptr = &s1;
//     s1.rollno = 21;
//     strcpy(s1.name,"Arpan Chandra");
//     s1.marks = 60.43;

//     student *ptr1;
//     ptr1 = &s2;
//     s2.rollno= 20;
//     strcpy(s2.name,"Arpan Chandra_02");
//     s2.marks = 60.38;

//     printf("\nsize of the strecture is: %d\n",sizeof(struct student));


//     printf("Roll_no. is: %d\n",s1.rollno);
//     printf("Roll_no. is: %d\n",ptr -> rollno);
//     printf("Roll_no. is: %d\n",(*ptr).rollno);

//     printf("Name is: %s\n",s1.name);
//     printf("Name is: %s\n",ptr -> name);
//     printf("Name is: %s\n",(*ptr).name);

//     printf("Marks is: %0.2f\n",s1.marks);
//     printf("Marks is: %0.2f\n",ptr -> marks);
//     printf("Marks is: %0.2f\n",(*ptr).marks);




//     printf("Roll_no. is: %d\n",s2.rollno);
//     printf("Roll_no. is: %d\n",ptr1 -> rollno);
//     printf("Roll_no. is: %d\n",(*ptr1).rollno);

//     printf("Name is: %s\n",s2.name);
//     printf("Name is: %s\n",ptr1 -> name);
//     printf("Name is: %s\n",(*ptr1).name);
    
//     printf("Marks is: %0.2f\n",s2.marks);
//     printf("Marks is: %0.2f\n",ptr1 -> marks);
//     printf("Marks is: %0.2f\n",(*ptr1).marks);

//     return 0;
// }