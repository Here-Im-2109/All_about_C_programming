//    Purpose:    Travel Agency Manager.

#include<stdio.h>
#include<string.h>

typedef struct driver
{
    char name[20];
    char license_no[50];
	char route[100];
	char kms[50];
}driver;

driver d1,d2,d3,d4;

int main ()
{
    strcpy(d1.name,"Arpan Chandra");
    strcpy(d1.license_no,"21U10238");
    strcpy(d1.route,"Kolkata to Delhi");
    strcpy (d1.kms, "200.345 kms");

    strcpy(d2.name,"Mayukh Bhattacharya");
    strcpy(d2.license_no,"21U10239");
    strcpy(d2.route,"Kolkata to Mumbai");
    strcpy (d2.kms, "300.450 kms");

    strcpy(d3.name,"Taman Nayak");
    strcpy(d3.license_no,"21U10240");
    strcpy(d3.route,"Delhi to Kolkata");
    strcpy (d3.kms, "200.345 kms");

    strcpy(d4.name,"Rana Gorai");
    strcpy(d4.license_no,"21U10241");
    strcpy(d4.route,"Mumbai to Kolkata");
    strcpy (d4.kms, "300.450 kms");



    printf("\nDriver No. 1 Name: %s\n",d1.name);
    printf("Driver No. 1 License_no : %s\n",d1.license_no);
    printf("Driver No. 1 Ruote : %s\n",d1.route);
    printf("Driver No. 1 total kms journey : %s\n\n",d1.kms);

    printf("Driver No. 2 Name: %s\n",d2.name);
    printf("Driver No. 2 License_no : %s\n",d2.license_no);
    printf("Driver No. 2 Ruote : %s\n",d2.route);
    printf("Driver No. 2 total kms journey : %s\n\n",d2.kms);

    printf("Driver No. 3 Name: %s\n",d3.name);
    printf("Driver No. 3 License_no : %s\n",d3.license_no);
    printf("Driver No. 3 Ruote : %s\n",d3.route);
    printf("Driver No. 3 total kms journey : %s\n\n",d3.kms);

    printf("Driver No. 4 Name: %s\n",d4.name);
    printf("Driver No. 4 License_no : %s\n",d4.license_no);
    printf("Driver No. 4 Ruote : %s\n",d4.route);
    printf("Driver No. 4 total kms journey : %s\n\n",d4.kms);


return 0;
}