#include <stdio.h>
int main()
{
    int num;
    for (int i = 0; i < 10; i++)
    {
        printf("\nEnter a number & enter '0' to exit: ");
        scanf("%d", &num);
        if (num == 0)
        {
            goto end;
        }

        for (int j = 0; j < num; j++)
        {
            printf("Hi, Arpan !!\n");
        }
    }
    end:
    return 0;
}