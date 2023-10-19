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
int i = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
