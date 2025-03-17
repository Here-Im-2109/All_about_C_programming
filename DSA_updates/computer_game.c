//		Purpose: Computer Game.

#include <stdio.h>
void main()
{
	int me, num = 21, i = 0, ms = 0;
	while (i < 21)
	{
		printf("\nHii, enter a number less then 4: ");
		scanf("%d", &me);
		if (me <= 4)
		{
			switch (me)
			{
			case 1:
				printf("\n-Computer will pick: 4");
				ms = me + 4;
				break;
			case 2:
				printf("\n-Computer will pick: 3");
				ms = me + 3;
				break;
			case 3:
				printf("\n-Computer will pick: 2");
				ms = me + 2;
				break;
			case 4:
				printf("\n-Computer will pick: 1");
				ms = me + 1;
				break;
			default:
				break;
			}
			i = ms + i;
			num = num - ms;
			printf("\n\n-Remaining matchsticks: %d", num);
			if (num == 1)
			{
				break;
			}
		}
	}

	if (num == 1)
	{
		printf("\n\n- Here Computer wins");
	}
	else
	{
		printf("\n\n- Here Arpan wins");
	}
}
