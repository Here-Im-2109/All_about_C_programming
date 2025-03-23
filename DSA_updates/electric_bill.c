// 	Purpose: Calculate the electric bill

#include <stdio.h>

void main()
{
	int total_bill = 5, units;
	printf("Enter your unit: ");
	scanf("%d", &units);

	if (units < 100)
	{
		// For units less than 100, charge 5 per unit
		total_bill += units * 5;
	}
	else
	{
		int current_unit = 1;
		int rate = 5;

		while (current_unit <= units)
		{
			if (current_unit <= 400)
			{
				// Increment bill by the current rate for each unit
				total_bill += rate;
				current_unit++;

				// Increase rate by 1 after every 100 units
				if (current_unit % 100 == 1)
				{
					rate++;
				}
			}
			else
			{
				// For units above 400, charge 10 per unit
				total_bill += 10;
				current_unit++;
			}
		}
	}

	printf("Your Billing Amount is : %d", total_bill);

	// Display the billing amount inside a box
	printf("\n\n");
	printf("****************************\n");
	printf("*      Electric Bill        *\n");
	printf("****************************\n");
	printf("*  Units Consumed: %6d   *\n", units);
	printf("****************************\n");
	printf("*  Billing Amount: %6d   *\n", total_bill);
	printf("****************************\n");
}