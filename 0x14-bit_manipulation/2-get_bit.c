#include "main.h"

/**
 * get_bit - prints a bit an some index.
 * @n: an unsigned integer to playwith hahahahaha.
 * @index: a place where we will pick the godammn index starting from 0.
 * Return: -1 on faliure and 1 or 0 as index + 1 th bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
		return (n >> index & 1);
	return (-1);
}
