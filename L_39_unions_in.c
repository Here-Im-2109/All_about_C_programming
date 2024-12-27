//    Purpose:  Unions In C.

#include <stdio.h>
#include <string.h>

typedef union Book {
   int pages;
   float price;
   char title[20];
} book;

int main( ) 
{
    printf("\nThis thing will print because we defined union individually & print it.");
    book b1;       
    b1.pages = 100;
    printf( "\nPages: %d\n", b1.pages);
    b1.price = 250.5;
    printf( "Price : %.1f\n", b1.price);
    strcpy( b1.title, "C Programming");
    printf( "Title : %s\n", b1.title);

    
    printf("\nThis thing will not print because we defined union simultaneously & later we print.");
    book b2;
    b2.pages=200;
    b2.price = 350.50;
    strcpy(b2.title,"Let us 'C'");
    printf( "\nPages: %d\n", b2.pages);
    printf( "Price : %.1f\n", b2.price);
    printf( "Title : %s\n", b2.title);
    return 0;
}