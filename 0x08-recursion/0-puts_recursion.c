#include "main.h"
/**
 * _puts_recursion - prints a string recursively
 * @s: is input string to print
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
s++;
_puts_recursion(s);
}
}
