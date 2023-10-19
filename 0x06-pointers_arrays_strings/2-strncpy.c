#include "main.h"
/**
 * _strncpy - Concatenate the first n characters of string src to dest
 * @dest: Destination string
 * @src: Source string
 * @n: Number of characters to concatenate
 * Return: Pointer to the resulting string (dest)
 */
char *_strncpy(char *dest, const char *src, int n)
{
char *original_dest = dest;
while (n > 0)
{
if (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
else
{
*dest = '\0';
}
n--;
}
return (original_dest);
}
