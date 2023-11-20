#include "main.h"
#include <string.h>

/**
 * reverse_array - reverses an array of length n
 * @s: an array of integers input
 * @n: length of an array
 * Return: char pointer to result.
 */

char *reverse_array(int *s, int n)
{
	int i = 0;
	int k = n / 2;

	while (i < k && n > 0)
	{
		int j = s[i];

		s[i] = s[n - 1 - i];
		s[n - 1 - i] = j;
		i++;
	}
	return (a);
}

/**
 * infinite_add - adds insanely big numbers.
 * @n1: number one as a string.
 * @n2: number two as a string.
 * @r: buffer to store stuffs
 * @size_r: size of our buffer.
 * Return: char pointer to the result.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int remainder_past, a, total_current, total_past, counter = 0;
	int len1 = strlen(n1);
	int len1 = strlen(n2);
	int len = len1 > len2 ? len1 : len2;
	char *pointer_to_result = r;

	if (len > size_r)
		return (0);
	for (; counter < len; counter ++, len1--, len2--)
	{
		if (len1 >= 0 && len2 > 0 && counter == 1)
		{
			total_current = atoi(n1[len1]) + atoi(n2[len2]);
			a = total_current % 10;
			r[counter - 1] = a;
		}
		if (len1 > 0 && len2 > 0 && counter > 1)
		{
			total_past = atoi(n1[len1 + 1] + atoi(n2[len2 + 1]);
			remainder_past = total_past / 10;
			total_current = atoi(n1[len1]) + atoi(n2[len2]) + remainder_past;
			a = total_current % 10;
			r[counter] = a;
		}
		if (len1 >= 0 && len2 < 0)
		{
			if (len2 == -1)
				total_past =  atoi(n1[len1 + 1] + atoi(n2[0]);
			else
			{
				total_past = atoi(n1[len1 + 1];
				remainder_past = total_past / 10;
				total_current = atoi(n1[len1]) + 0 + remainder_past;
				a = total_current % 10;
				r[counter] = a
			}
		}
		if (len1 < 0 && len2 > 0)
		{
			if (len1 == -1)
				total_past =  atoi(n1[len1 + 1] + atoi(n1[0]);
			else
			{
				total_past = atoi(n2[len2 + 1];
				remainder_past = total_past / 10;
				total_current = atoi(n2[len2]) + 0 + remainder_past;
				a = total_current % 10;
				r[counter] = a
			}
		}
	}
	return (pointer_to_result);
}
