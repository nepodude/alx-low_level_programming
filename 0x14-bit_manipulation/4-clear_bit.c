#include "main.h"

/**
 * clear_bit - sets the bit to 0 hahaha.
 * @n: pointer to input unsigned long int.
 * @index: a place where we will place our 1 bit starting at index 0.
 * Return: 1 on success and -1 on failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64 && *n - powering(2, index) >= 0)
	{
		*n -= powering(2, index);
		return(1);
	}
	if (*n - powering (2, index) < 0)
		return;
	return (-1);
}
