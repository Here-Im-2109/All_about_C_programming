//  Purpose: Solution of Start & Reverse Star Triangular Pattern

#include <stdio.h>

void star_pattern(int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void reverse_star_pattern(int row)
{
    while (row > 0)
    {
        for (int j = row; j != 0; j--)
        {
            printf("* ");
        }
        row = row - 1;
        printf("\n");
    }
}

int main()
{
    int rows, type;
up:
    printf("\n-> Press '1' & enter to print Star triangular pattern.\n-> Press '2' & enter to print Reveresed star triangular pattern.\n-> press '0' & enter to Quit the programme.\n=> ");
    scanf("%d", &type);
    switch (type)
    {
    case 1:
        printf("You have choose to print star triangular pattern:");
        printf("\nHow many rows do you want to print ?\n-> ");
        scanf("%d", &rows);
        printf("Star triangular pattern of %d rows:\n", rows);
        star_pattern(rows);
        int i;
    upp:
        printf("If You want to continue the game press '1' or press '0' to QUIT the game: ");
        scanf("%d", &i);
        if (i == 1)
        {
            goto up;
        }
        else if (i == 0)
        {
            goto bre;
        }
        else
        {
            goto def;
        }

    case 2:
        printf("You have choose to print Reverse star triangular pattern:");
        printf("\nHow many rows do you want to print ?\n-> ");
        scanf("%d", &rows);
        printf("Reverse Star triangular pattern of %d rows:\n", rows);
        reverse_star_pattern(rows);
        int j;
    apun:
        printf("If You want to continue the game press '1' or press '0' to QUIT the game: ");
        scanf("%d", &j);
        if (j == 1)
        {
            goto up;
        }
        else if (j == 0)
        {
            goto bre;
        }
        else
        {
            goto deff;
        }

    case 0:
bre:

        printf("Thank You!");
        goto end;

    default:
        printf("\n-> You have entered a invalid number.\n");
        goto up;
    }
def:
    printf("\n-> You have entered a invalid number.\n");
    goto upp;
deff:
    printf("\n-> You have entered a invalid number.\n");
    goto apun;

end:
    return 0;
}