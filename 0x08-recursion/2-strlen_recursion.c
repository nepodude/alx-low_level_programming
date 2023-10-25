#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
int length = 0;
if (*s)
{
length++;
s++;
_strlen_recursion(s);
}
return (length);
}
