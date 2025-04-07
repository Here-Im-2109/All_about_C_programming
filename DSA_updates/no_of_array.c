//    Purpose: Find how many numbers are there in this array.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    printf("Enter anything: ");
    char x[1000];
    scanf("%s",x);


    int zero=0,one=0,two=0,three=0,
    four=0,five=0,six=0,seven=0,eight=0,nine=0;
    int i=0;
    while(x[i]!='\0')
    {
        if(x[i]=='0')
        {
            zero++;
        }
        else if(x[i]=='1')
        {
            one++;
        }
        else if(x[i]=='2')
        {
            two++;
        }
        else if(x[i]=='3')
        {
            three++;
        }
        else if(x[i]=='4')
        {
            four++;
        }
        else if(x[i]=='5')
        {
            five++;
        }
        else if(x[i]=='6')
        {
            six++;
        }
        else if(x[i]=='7')
        {
            seven++;
        }
        else if(x[i]=='8')
        {
            eight++;
        }
        else if(x[i]=='9')
        {
            nine++;
        }
        i++;
    }
    printf("No. of Zero-%d\nNo. of one-%d\nNo. of two-%d\nNo. of Three-%d\nNo. of Four-%d\nNo. of Five-%d\nNo. of Six-%d\nNo. of Seven-%d\nNo. of Eight-%d\nNo. of Nine-%d",zero,one,two,three,four,five,six,seven,eight,nine);
    return 0;
}