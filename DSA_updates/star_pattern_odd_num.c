#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	int line=1;
	while(line<=num)
	{	
		int space=0;
		while (space<(num-line))
		{
			printf(" ");
			space=space+1;
		}
		int star=0;
		while (star<(2*line)-1)
		{
			printf("*");
			star=star+1;
		}
		line++;
		printf("\n");
	}
}