#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary representation of number n
 * @n: input unsigned int.
 */

void print_binary(unsigned long int n)
{
	int length = 0;
	unsigned long int copy = n;
	unsigned long int keeper = n;


	if (n == 0)
		printf("0");
	while (copy > 0)
	{
		copy >>= 1;
		length++;
	}

	for (; length >= 1; length--)
	{
		if ((n >>= (length - 1)) & 1)
			printf("1");
		else
			printf("0");
		n = keeper;
	}
}
