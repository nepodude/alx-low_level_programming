#include <string.h>
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
int x;
x = strlen(s1) + strlen(s2) + 1;
newstring = malloc(x *sizeof(char));
strcat(s1, s2);
return (s1);
}
