#include "main.h"
#include <stdio.h>

/**
 * get_bit - prints a bit an some index.
 * @n: an unsigned integer to playwith hahahahaha.
 * @index: a place where we will pick the godammn index starting from 0.
 * Return: -1 on faliure and 1 or 0 as index + 1 th bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int length = 0;
	unsigned long int copy = n;

	while (copy > 0)
	{
		copy >>= 1;
		length++;
	}
	if (index > length - 1)
		return (-1);

	if (n > 0)
		return (n >>= (length - index + 1) & 1);
	return (-1);

}
