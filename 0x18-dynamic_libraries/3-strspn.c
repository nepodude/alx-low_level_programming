#include "main.h"
/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int counter, i, j;
counter = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
counter++;
break;
}
}
if (accept[j] == '\0')
break;
}
return (counter);
}
