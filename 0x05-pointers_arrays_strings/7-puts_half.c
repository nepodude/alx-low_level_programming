#include "main.h"
/**
 * puts_half - Prints the second half of a string.
 * @str: The input string.
 */
void puts_half(char *str)
{
int counter = 0;
int mentor = 0;
while (str[counter] != '\0')
{
counter++;
}
if (counter % 2 == 0)
{
mentor = counter / 2;
}
else
{
mentor = (counter + 1) / 2;
}
while (str[mentor] != '\0')
{
_putchar(str[mentor]);
mentor++;
}
_putchar('\n');
}
