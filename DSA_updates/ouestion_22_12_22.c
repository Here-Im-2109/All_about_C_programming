//     Purpose: Quadrant problem.


#include <string.h>
#include <stdio.h>
typedef struct
{
     float x;
     float y;

} point;

point p1;

void check(point p1)
{
     if (p1.x > 0 && p1.y > 0)
     {
          printf("This point lies on 1st qua ");
     }
     else if ((p1.x) < 0 && (p1.y) > 0)
     {
          printf("This point lies on 2nd qua ");
     }
     else if ((p1.x) < 0 && (p1.y) < 0)
     {
          printf("This point lies on 3rd qua ");
     }
     else
     {
          printf("This point lies on 3rd qua ");
     }
}

void main()
{
     printf("Enter co_ordinate of 1st point(x,y): ");
     scanf("%f,%f", &p1.x, &p1.y);
     check(p1);
}