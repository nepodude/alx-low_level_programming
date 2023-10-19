#include "main.h"
/**
 * _strcat - concatenation of two strings
 * @dest: string to concatenate to
 * @src: string to be concatenated
 * Return: char is the success
 */
char *_strcat(char *dest, char *src)
{
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
return (dest);
}
