#include<stdio.h>

/**
 * main - printing digits
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		tchar(digit + '0');
		++digit;
	}
	putchar('\n');

	return (0);
}
