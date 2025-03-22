#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<20;i++)
	{
		if ((i|(i+1))>=1)
		{
			printf("%d\n",i+1);
		}
	}
	return 0;
}