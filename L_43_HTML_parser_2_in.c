//    Purpose:    HTML Parser Exercise solution.


#include <stdio.h>
#include <string.h>

void pass(char *string)
{
    int in = 1, word = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (*(string + i) == '<')
        {
            in = 0;
            continue;
        }
        else if (*(string + i) == '>')
        {
            in = 1;
            continue;
        }
        else if (*(string + i) == '/')
        {
            in = 0;
            continue;
        }
        if (in == 1)
        {
            *(string + word) = *(string + i);
            word++;
        }
    }
    *(string + word) = '\0'; // Cutting_off 'HTML' header file

    while (*(string + 0) == ' ') // deleating before spaces.
    {
        for (int i = 0; i < strlen(string); i++)
        {
            *(string + i) = *(string + (i + 1));
        }
    }

    while (*(string + (strlen(string) - 1)) == ' ') // deleating after spaces.
    {
        *(string + (strlen(string) - 1)) = '\0';
    }
}

int main()
{
    char string[] = "<h1>        My name is Arpan.       </h1>";
    pass(string);
    printf("The string is ||%s||", string);

    return 0;
}