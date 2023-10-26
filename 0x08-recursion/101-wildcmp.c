#include "main.h"
/**
 * wildcmp - compares two strings
 * @s1: the normal string
 * @s2: the special string containing "*"
 *
 * Return: 1 if identical, else 0
 */
int wildcmp(char *s1, char *s2)
{
if (((*s1 == *s2) || ((*s1 != *s2) && (*s2 == '*')))
&& (*s1 && *s2))
{
wildcmp(s1 + 1, s2 + 1);
return (1);
}
return (0);
}
