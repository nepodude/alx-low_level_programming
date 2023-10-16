#include "main.h"
/**
 * _puts - gonna print the thing
 * @str: is the input
 *
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
}
