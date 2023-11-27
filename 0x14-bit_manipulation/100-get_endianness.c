#include <stdio.h>

/**
 * get_endianness - checks for endianness (little or big.)
 * Return: 1 for little endianess and 0 for big endianness
 */

int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	return (*endian == 1);

}

