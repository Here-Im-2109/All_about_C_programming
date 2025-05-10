//    Purpose:  Nested Structure.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct person
{
    char name[20];
    char dob[10];
    char blood[15];


} per;

typedef struct student
{
    per person;

    char id[20];
    char roll[10];
    int addm;
    char lib[20];

} std;

std s1,s2,s3,s4;

int main ()
{

    strcpy(s1.person.name,"Arpan Chandra");
    strcpy(s1.person.dob,"21/09/00");
    strcpy(s1.person.blood,"O +ve");
    strcpy(s1.roll,"21EE8026");
    strcpy(s1.id,"1234567");
    s1.addm = 908377;
    strcpy(s1.lib,"21U10238");

    strcpy(s2.person.name,"Mayukh Bhattacharya");
    strcpy(s2.person.dob,"04/04/01");
    strcpy(s2.person.blood,"O +ve");
    strcpy(s2.roll,"21EE8034");
    strcpy(s2.id,"1234");
    s2.addm = 454566;
    strcpy(s2.lib,"21U10239");

    strcpy(s3.person.name,"Taman Nayek");
    strcpy(s3.person.dob,"!?/!?/!?");
    strcpy(s3.person.blood,"!?");
    strcpy(s3.roll,"21EE8035");
    strcpy(s3.id,"1234980");
    s3.addm = 4566;
    strcpy(s3.lib,"21U10240");

    strcpy(s4.person.name,"Rana Gorai");
    strcpy(s4.person.dob,"!?/!?/!?");
    strcpy(s4.person.blood,"!?");
    strcpy(s4.roll,"21EE8036");
    strcpy(s4.id,"1234979");
    s4.addm = 457866;
    strcpy(s4.lib,"21U10240");
    

    printf("\nDetails of 1_No. Student:\n\n");
    printf("Name of the 1_No. student is: %s\n",s1.person.name);
    printf("DOB of the 1_No. student is: %s\n",s1.person.dob);
    printf("Blood grp of the 1_No. student is: %s\n",s1.person.blood);
    printf("Roll no. of the 1_No. student is: %s\n",s1.roll);
    printf("I'd card no. of the 1_No. student is: %s\n",s1.id);
    printf("Admission card no. of 1_No. student is: %d\n",s1.addm);
    printf("Library card no of 1_No. student is: %s\n",s1.lib);

    printf("\nDetails of 2_No. Student:\n\n");
    printf("Name of the 2_No. student is: %s\n",s2.person.name);
    printf("DOB of the 2_No. student is: %s\n",s2.person.dob);
    printf("Blood grp of the 2_No. student is: %s\n",s2.person.blood);
    printf("Roll no. of the 2_No. student is: %s\n",s2.roll);
    printf("I'd card no. of the 2_No. student is: %s\n",s2.id);
    printf("Admission card no. of 2_No. student is: %d\n",s2.addm);
    printf("Library card no of 2_No. student is: %s\n",s2.lib);

    printf("\nDetails of 3_No. Student:\n\n");
    printf("Name of the 3_No. student is: %s\n",s3.person.name);
    printf("DOB of the 3_No. student is: %s\n",s3.person.dob);
    printf("Blood grp of the 3_No. student is: %s\n",s3.person.blood);
    printf("Roll no. of the 3_No. student is: %s\n",s3.roll);
    printf("I'd card no. of the 3_No. student is: %s\n",s3.id);
    printf("Admission card no. of 3_No. student is: %d\n",s3.addm);
    printf("Library card no of 3_No. student is: %s\n",s3.lib);

    printf("\nDetails of 4_No. Student:\n\n");
    printf("Name of the 4_No. student is: %s\n",s4.person.name);
    printf("DOB of the 4_No. student is: %s\n",s4.person.dob);
    printf("Blood grp of the 4_No. student is: %s\n",s4.person.blood);
    printf("Roll no. of the 4_No. student is: %s\n",s4.roll);
    printf("I'd card no. of the 4_No. student is: %s\n",s4.id);
    printf("Admission card no. of 4_No. student is: %d\n",s4.addm);
    printf("Library card no of 4_No. student is: %s\n",s4.lib);

    return 0;
}