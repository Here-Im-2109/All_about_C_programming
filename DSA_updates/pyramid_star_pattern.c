//    Purpose: Print a Pattern


#include<stdio.h>
void main()  
{  
    int num,count=1,a;  
  	printf("Enter a num: ");  
    scanf("%d", &num);  
	while(count <= num)
    {  
        a=0;
        while( a<=(num - count))  
        {  
            printf(" ");  
            a=a+1;  
        }  
  
        a=0;
        while(a < (2*count-1))
        {  
            printf("*");  
            a=a+1;  
        }  
  
        printf("\n");  
        count=count+1;  
    }  
}  