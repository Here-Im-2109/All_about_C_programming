// purpose: This code demonstrates how to convert a decimal number to its binary representation using bitwise operations in C.

#include <stdio.h>
void main()
{
	unsigned int num;
	printf("Enter a Decimal Number: "); // num  =    (10)   =      00001010, 00010100...00000000
	scanf("%d", &num);					// bitwise operation =   (&)
	unsigned int mask = (0x80);			//  mask- hexa =   (80)    =     10000000
	unsigned int res;
	int i = 0;
	printf("The Binary Digits of this Decimal number is: ");
	while (i < 8)
	{
		res = num & mask;
		printf("%d", res >> 7); /* res ta ke right shift koreche
								karon 8 ta digit (num or mask) */
		i = i + 1;
		num = num << 1;
	}
}