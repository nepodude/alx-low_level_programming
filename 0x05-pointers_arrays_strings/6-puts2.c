#include "main.h"
/**
 * puts2 - Amma print even stuffs;
 * @str: is our beloved input;
 */
void puts2(char *str)
{
int counter = 0;
int slicer = 0;
while (*str != '\0')
{
counter++;
}
counter--;
for (; slicer <= counter - 1; slicer += 2)
{
_putchar(*(str + slicer));
}
_putchar('\n');
}
