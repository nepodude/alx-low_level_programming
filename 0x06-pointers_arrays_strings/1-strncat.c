#include "main.h"
/**
 * _strncat - Concatenate the first n characters of string src to dest
 * @dest: Destination string
 * @src: Source string
 * @n: Number of characters to concatenate
 * Return: Pointer to the resulting string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
char *s = dest;
while (*dest)
dest++;
if (n > 0)
{
while (*src && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
}
*dest = '\0';
return s;
}
