#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * str_concat - concatenates 2 strings
 * @s1: first input string
 * @s2: second input string
 *
 * Return: pointer to newmemory stuffs
 */
char *str_concat(char *s1, char *s2)
{
char *newstring;
int first = 0, second = 0, x;
if (s1 != NULL)
first = strlen(s1);
if (s2 != NULL)
second = strlen(s2);
x = first + second + 1;
newstring = malloc(x *sizeof(char));
if (newstring == NULL)
return (NULL);
if (s1 != NULL)
strcpy(newstring, s1);
if (s2 != NULL)
strcpy(newstring + first, s2);
return (newstring);
}
