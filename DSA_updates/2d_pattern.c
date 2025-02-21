//	Purpose: Pattern Printing 2 mountains with n rows


#include<stdio.h>
void main()
{
	int num,r=1,space,star;
	printf("Enter a number: ");
	scanf("%d",&num);
	while(r<=num)
	{
		star=0;
		while(star<r)
		{
			printf("*");
			star=star+1;
		}
		space=0;
		while((space<(2*(num-r))-1)&&(num>r))
		{
			printf(" ");
			space=space+1;
		}
		star=0;
		while(star<r)
		{
			if(!((r==num)&&(star==r-1)))
			{
				printf("*");
			}
			star=star+1;
		}
		printf("\n");
		r=r+1;
	}
}