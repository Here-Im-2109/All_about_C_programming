//    Purpose:    Travel Agency Manager.


#include <stdio.h>
#include <string.h>

typedef struct driver
{
    char name[30];
    char license_no[30];
    char route[50];
    char kms[50];
} driver;

int main()
{
    printf("\nEnter the number of Driver you have?\n\n=> ");
    int n;
    scanf("%d", &n);
    driver d[n];
    getchar();
    // fflush(stdin);
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the Details of Driver_No. %d", i + 1);

        printf("\n\nEnter the Name of Driver No. %d: ", i + 1);
        gets(d[i].name);

        printf("Enter the License_no. of Driver No. %d: ", i + 1);
        gets(d[i].license_no);

        printf("Enter the Route of Driver No. %d Drive: ", i + 1);
        gets(d[i].route);

        printf("Enter how much kms Driver No. %d travels: ", i + 1);
        gets(d[i].kms);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n\nDriver No. %d Name: ", i + 1);
        puts(d[i].name);
        printf("\nDriver No. %d License_no : ", i + 1);
        puts(d[i].license_no);
        printf("\nDriver No. %d Ruote : ", i + 1);
        puts(d[i].route);
        printf("\nDriver No. %d total kms journey : ", i + 1);
        puts(d[i].kms);
    }

    return 0;
}