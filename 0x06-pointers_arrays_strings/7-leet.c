#include "main.h"
/**
 * leet - going to code some words
 * @s: a string pointer input
 * Return: the string s it's self
 */
char *leet(char *s)
{
int i, j;
char original[] = "aAeEoOtTlL";
char leet[] = "4433007711";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; original[j] != '\0'; j++)
{
if (s[i] == original[j])
{
s[i] = leet[j];
break;
}
}
}
return (s);
}
