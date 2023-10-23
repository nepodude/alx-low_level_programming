#include "main.h"
#include <stdio.h>
/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 * Return: a pointer to the first occurrence of c
 */
char *_strchr(char *s, char c)
{
char *indicator = s;
while (*s != '\0')
{
if (*s == c)
{
return (indicator);
}
s++;
}
return (NULL);
}
