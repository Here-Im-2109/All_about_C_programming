//	Purpose: To check that the number which you entered is a krishnamurti number ?! or not !?

#include<stdio.h>
void main ()
{
	int n,rem,sum=0;
	printf ("\nEnter a number: ");
	scanf ("%d",&n);
    int a=n;
	while (n!=0)
	{
		rem=n%10;
		int fact=1;
		while (rem>0)
		{
			fact=fact*rem;
			rem=rem-1;
		}
		sum=sum+fact;
		n=n/10;
	}
	if (sum==a)
	{
		printf("This is a Krishnamurty Number.");
	}
	else
	{
		printf("This is not a Krishnamurty Number.");
	}
}