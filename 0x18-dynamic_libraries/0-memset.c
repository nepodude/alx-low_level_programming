#include "main.h"
/**
 * _memset - fill the first n places with b.
 * @s: is the input pointer pointing to memory location
 * @b: is input character to full
 * @n: is the number of bytes to fill
 * Return: returns pointer to area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
char *start = s;
while (n > 0)
{
*s = b;
s++;
n--;
}
return (start);
}
