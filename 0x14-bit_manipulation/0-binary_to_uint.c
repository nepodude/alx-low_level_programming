#include "main.h"
#include <string.h>

/**
 * binary_to_unit - returns an equivalent number in decimal.
 * @b: an input pointer that will point to whatever the first character of
 * input string is.
 * Return: unsigned int output after computation.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, length = 0, helper;
	const char *temp = b;

	if (b == NULL)
		return (0);
	while (*temp != '\0')
	{
		if (*temp != '0' && *temp != '1')
			return (0);
		length++;
		temp++;
	}
	temp = b;
	for (helper = 0; helper < length; helper++)
	{
		result += (temp[helper] - '0') * powering(2, (length - helper - 1));
	}
	return (result);
}
