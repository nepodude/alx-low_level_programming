#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: input string
 * @s2: input string for comparision
 * Return: negative then s1 is smaller, positive s1 is bigger
 * and for 0 then s1 and s2 are equal.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
{
i++;
}
return (s1[i] - s2[i]);
}
