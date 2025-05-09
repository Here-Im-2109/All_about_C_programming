//    Purpose: Basics of structure in C.

#include <stdio.h>
struct student
{
    unsigned int roll;
    long long contact;
    char name[30];
    char class[20];
    char email[50];
    char addr[100];
};
int main()
{
    int n = 0;
    printf("\nEnter the no. of Student you have ?\n\n=> ");
    scanf("%lld", &n);
    struct student s[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter Student no. %d Roll_number: ", i + 1);
        scanf("%d", &s[i].roll);
        printf("Enter Student no. %d Contact: ", i + 1);
        scanf("%lld", &s[i].contact);
        getchar();
        printf("Enter Student no. %d Name: ", i + 1);
        gets(s[i].name);
        printf("Enter Student no. %d Class: ", i + 1);
        gets(s[i].class);
        printf("Enter Student no. %d Email: ", i + 1);
        gets(s[i].email);
        printf("Enter Student no. %d Address: ", i + 1);
        gets(s[i].addr);
    }

    printf("Here the details of the students:");

    for (int i = 0; i < n; i++)
    {
        printf("\n\nStudent No._%d Roll Number: %d", i + 1, s[i].roll);
        printf("\n\nStudent No._%d Contact Number: %lld", i + 1, s[i].contact);
        printf("\n\nStudent No._%d Name: ", i + 1);
        puts(s[i].name);
        printf("\nStudent No._%d class: ", i + 1);
        puts(s[i].class);
        printf("\nStudent No._%d Email: ", i + 1);
        puts(s[i].email);
        printf("\nStudent No._%d Address: ", i + 1);
        puts(s[i].addr);
    }

    return 0;
}