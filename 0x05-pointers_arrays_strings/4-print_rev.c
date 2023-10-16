#include "main.h"
/**
 * print_rev - gonna print the thing
 * @s: is the input
 *
 */
void print_rev(char *s)
{
int length = 0;
while (s[length] != '0')
{
length++;
}
int i = length;
for (; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
