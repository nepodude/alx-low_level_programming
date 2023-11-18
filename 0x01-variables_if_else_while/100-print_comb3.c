#include <stdio.h>
/**
 * main - function that prints distinct combinations of digits
 * in increasing order and and 11, 22,.. are not allowed hahaha.
 * Return: 0 for success
*/
int main(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = x + 1; y <= 9; y++)
		{
			putchar(x + 48);
			putchar(y + 48);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
