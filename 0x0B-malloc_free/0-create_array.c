#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array tuuh.
 * @size: size of the
 * @c: character input
 * Return: an array of characters.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;
if (size == 0)
return (NULL);
array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
array[i] = c;
}
array[i] = '\0';
return (array);
}
