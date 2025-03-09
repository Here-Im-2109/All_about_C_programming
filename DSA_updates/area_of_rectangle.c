//    Purpose: Calculate the area of a Rectangle.



#include<stdio.h>
int areaofRectangle(int l,int w)
{
    int area;
    area = l*w;
    return area;
}
int main ()
{
    int length,width;
    printf("\nEnter the value of Length & Weidth of a rectangle: ");
    scanf("%d %d",&length,&width);
    int area = areaofRectangle(length,width);
    printf("The area of the rectangle is : %d",area);

    return 0;
}