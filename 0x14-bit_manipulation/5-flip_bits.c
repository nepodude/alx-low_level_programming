#include "main.h"

/**
 * flip_bits - a function that calculates number of bits to fliphahaha.
 * @n: the first unsigned long int to work with.
 * @m: The second unsigned long int to work with.
 * Return: number of bits that are required to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0, counter = 0;

	for (; bits < 64; bits++)
	{
		if ((n >> bits & 1) != (m >> bits & 1))
			counter++;
	}
	return (counter);
}
