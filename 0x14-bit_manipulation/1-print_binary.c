#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary representation of number n
 * @n: input unsigned int.
 */

void print_binary(unsigned long int n)
{
	int length = 0;

	if (n == 0)
		printf("0");
	while (n >= 1)
	{
		n >>= 1;
		length++;
	}

	for (; length >= 1; length--)
	{
		if ((n >>= (length - 1)) & 1)
			printf("1");
		else
			printf("0");
	}
}
