//    Purpose:    Learning Structure in C

#include <stdio.h>
#include <math.h>

typedef struct co_ordinate
{
    float x;
    float y;

} point;

point p1, p2;

float distance(point p1, point p2)
{
    float dist;
    dist = sqrt(pow(p1.x - p2.x, 2) + (pow(p1.y - p2.y, 2)));
    return dist;
}

int main()
{

    printf("Enter co_ordinate of 1st point (X1,Y1): ");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Enter co_ordinate of 2nd point (X2,Y2): ");
    scanf("%f %f", &p2.x, &p2.y);
    printf("\nCo_ordinate of 1st point: (%0.2f) x, %0.2f) y)\n", p1.x, p1.y);
    printf("\nCo_ordinate of 1st point: (%0.2f) x, %0.2f) y)\n", p2.x, p2.y);
    printf("\n-> Distance between point_1 & Point_2 is : %0.2f unit\n", distance(p1, p2));

    return 0;
}