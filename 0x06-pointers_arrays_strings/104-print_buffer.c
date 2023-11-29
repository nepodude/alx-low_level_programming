#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints the contents in a buffer pointed to by pointe b.
 * @b: pointer to the buffer we will print.
 * @size: amount of bytes we will print.
 */

void print_buffer(char *b, int size)
{
	int i, j, k, space;

	if (size <= 0)
		printf("\n");
	for (i = 0; i < size; i += 10)
	{
		printf("%08x:", i);
		for (j = 0, k = 0; j <= 9 && i + j < size; k++, j++)
		{
			if (k % 2 == 0)
				printf(" ");
			printf("%02x", b[i + j]);
			if (k == 9)
				printf(" ");
		}
		if (i + j >= size && size % 10 != 0)
		{
			space = (5 * (10 - (size % 10)) + 2) / 2;
			while (space > 0)
			{
				printf(" ");
				space--;
			}
		}
		for (j = 0; j < 10 && i + j < size; j++)
		{
			if (b[i + j] >= ' ' && b[i + j] <= '~')
				printf("%c", b[i + j]);
			else
				printf(".");
		}
		printf("\n");
	}
}
