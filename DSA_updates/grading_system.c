//	Purpose: Calculate the Grade


#include<stdio.h>
void main ()
{
	int ben,eng,math,phys,chem,avg,sum,sub=0;
	printf("Enter the num of Bengali: ");
	scanf("%d",&ben);
	printf("Enter the num of English: ");
	scanf("%d",&eng);
	printf("Enter the num of Mathematics: ");
	scanf("%d",&math);
	printf("Enter the num of Physics: ");
	scanf("%d",&phys);
	printf("Enter the num of Chemistry: ");
	scanf("%d",&chem);
	sum=ben+eng+math+phys+chem;
	avg=sum/5;
	printf("Total Number is %d",sum);
	switch (avg/10)
	{
		case 10: printf("\nThe Grade is: AA");
		break;
		case 9: printf("\nThe Grade is: A");
		break;
		case 8: printf("\nThe Grade is: B");
		break;
		case 7: printf("\nThe Grade is: C");
		break;
		case 6: printf("\nThe Grade is: D");
		break;
		case 5: printf("\nThe Grade is: E");
		break;
		case 4: printf("\nThe Grade is: P");
		break;
		default: printf("\nThe Grade is: FAIL");
	}
}