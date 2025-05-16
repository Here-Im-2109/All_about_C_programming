// purpose: To search for a number in an array

#include<stdio.h>
void main ()
{
    int key,i=0,j=0,arr [6]={5,7,10,6,12,13};
    printf("Enter a num: ");
    scanf("%d",&key);
    while(i<6)
    {
        if (arr[i]==key)
        {
            printf("%d is found in position %d",key,i);
        }
        else
        {
            j++;
        }
        i++;
    }
    if(i==j)
    {
        printf("%d is not found",key);
    }
}