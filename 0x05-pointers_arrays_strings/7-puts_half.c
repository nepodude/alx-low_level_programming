#include "main.h"
/**
 * puts_half - gonna print the thing
 * @str: is the input
 *
 */
void puts_half(char *str)
{
int counter = 0;
while (str[counter] != '\0')
{
str++;
counter++;
}
if (counter % 2 == 0)
{
int mentor = counter / 2;
while (mentor <= counter)
{
_putchar(str[mentor]);
mentor++;
}
}
else
{
int mentor  = (counter + 1) / 2;
while (mentor <= counter)
{
_putchar(str[mentor]);
mentor++;
}
}
}
