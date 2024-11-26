#include <stdio.h>
void main()
{
    for (int a = 0; a < 10; a++)
    {
        int age;
        printf("\nEnter Your age: ");
        scanf("%d", &age);
        if (age > 20)
        {
            printf("\nYour age is grater than 20\n");
            break;
        }
        if (age > 10)
        {
            printf("\nYour age is grater than 10\n");
            continue;
        }
        printf("\nYour age is less than 10.\n");
    }
}