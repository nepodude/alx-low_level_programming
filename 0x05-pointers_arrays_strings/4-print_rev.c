#include "main.h"
/**
 * print_rev - gonna print the thing
 * @s: is the input
 *
 */
void print_rev(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
while (length - 1 >= 0)
{
_putchar(s[length]);
length--;
}
_putchar('\n');
}
