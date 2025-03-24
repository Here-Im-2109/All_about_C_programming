//    Purpose: array of pointer to structure

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct student
{
    char name[40];
    int id;
    char roll[20];
    float marks;
} students;

int main()
{
    printf("Enter the number of student you have?\n=> ");
    int n;
    scanf("%d", &n);
    students *std[n];
    students s;
    getchar();
    for (int i = 0; i < n; i++)
    {
        // std[i]=(students*)malloc(sizeof(students));
        std[i] = &s;

        printf("\nEnter the data of student no. %d", i + 1);

        printf("\nEnter student no. %d's Name: ", i + 1);
        gets(std[i]->name);
        printf("Enter student no. %d's Roll No.: ", i + 1);
        gets(std[i]->roll);
        printf("Enter student no. %d's Marks: ", i + 1);
        scanf("%f", &std[i]->marks);
        printf("Enter student no. %d's I'd: ", i + 1);
        scanf("%d", &std[i]->id);
        fflush(stdin);
    }

    printf("\n\n");
    for (int i = 0; i < n; i++)
    {

        printf("\n\nDetails of student no. %d", i + 1);
        printf("\n\nName of the student no. %d is: ", i + 1);
        puts(std[i]->name);
        printf("Roll number of the student no. %d is: ", i + 1);
        puts(std[i]->roll);
        printf("Marks of the student no. %d is: %f ", i + 1, std[i]->marks);
        printf("\nI'd of the student no. %d is: %d ", i + 1, std[i]->id);
    }

    return 0;
}