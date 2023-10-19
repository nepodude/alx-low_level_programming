#include "main.h"
/**
 * _strncat - concat the first n characters of string src
 * @dest:char input
 * @src:char input
 * @n: a regulating integer.
 * Return:char out of the function
 */
char *_strncat(char *dest, char *src, int n)
{
int counter = 0;
while (*src != '\0')
{
counter++;
}
char *s = dest;
if (n > counter)
{
while (*dest)
{
dest++;
}
while (*src)
{
*dest = *src;
dest++;
src++;
}
}
else
{
while (*dest)
{
dest++;
}
int counter1 = 0;
while (counter1 < n)
{
*dest = *src;
dest++;
src++;
counter1;
}
}
*dest = '\0';
return (s);
}
