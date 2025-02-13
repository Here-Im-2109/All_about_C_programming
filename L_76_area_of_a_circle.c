// purpose : calculate the area of a circle

#include <stdio.h>
#include <math.h>
int main()
{
    float radius, area;
    printf("Enter the radius of a circle: ");
    scanf("%f", &radius);
    area = 3.14159 * pow(radius, 2);
    printf("Area of a circle = %.2f\n", area);
    return 0;
}